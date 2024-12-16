#include "md4c.h"
#include "runtime.h"
#include "types.h"
#include "reader.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct _MD_HTML {
	struct Cora *co;
	Obj curr;		// symbol
	Obj stack;		// symbol
	int size;
	int cap;
	char escape_map[256];
} MD_HTML;

static void
md_html_push(MD_HTML * r) {
	Obj x = symbolGet(r->curr);
	if (r->size >= r->cap) {
		if (r->cap == 0) {
			r->cap = 16;
		} else {
			r->cap = r->cap * 2;
		}

		Obj stack = makeVector(r->cap);
		for (int i = 0; i < r->size; i++) {
			Obj oldStack = symbolGet(r->stack);
			vectorSet(stack, i, vectorRef(oldStack, i));
		}
		primSet(r->co, r->stack, stack);
	}

	vectorSet(symbolGet(r->stack), r->size, x);
	r->size++;
}

static Obj
md_html_pop(MD_HTML * r) {
	r->size--;
	return vectorRef(symbolGet(r->stack), r->size);
}

static void
append_curr(MD_HTML * r, Obj x) {
	Obj v = cons(x, symbolGet(r->curr));
	primSet(r->co, r->curr, v);
}

static inline void
render_verbatim_enter(MD_HTML * r, const MD_CHAR * text) {
	md_html_push(r);
	primSet(r->co, r->curr, cons(intern(text), Nil));
}

static inline void
render_verbatim_leave(MD_HTML * r) {
	Obj tmp = reverse(symbolGet(r->curr));
	Obj old = md_html_pop(r);
	primSet(r->co, r->curr, cons(tmp, old));
}

static void
render_append_text1(MD_HTML * r, const MD_CHAR * data, MD_SIZE size) {
	strBuf s = fromCStr("language-");
	strBuf lang = fromBlk((char *) data, size);
	s = strCat(s, toStr(lang));
	append_curr(r, makeString(toCStr(s), strLen(toStr(s))));
}

static void
render_attribute(MD_HTML * r, const MD_ATTRIBUTE * attr,
		 void (*fn_append)(MD_HTML *, const MD_CHAR *, MD_SIZE)) {
	int i;

	for (i = 0; attr->substr_offsets[i] < attr->size; i++) {
		MD_TEXTTYPE type = attr->substr_types[i];
		MD_OFFSET off = attr->substr_offsets[i];
		MD_SIZE size = attr->substr_offsets[i + 1] - off;
		const MD_CHAR *text = attr->text + off;

		switch (type) {
			// case MD_TEXT_NULLCHAR:  render_utf8_codepoint(r, 0x0000, render_verbatim); break;
			// case MD_TEXT_ENTITY:    render_entity(r, text, size, fn_append); break;
		default:
			fn_append(r, text, size);
			break;
		}
	}
}

static void
render_open_li_block(MD_HTML * r, const MD_BLOCK_LI_DETAIL * det) {
	if (det->is_task) {
		md_html_push(r);
		Obj tmp = cons(intern("class"),
			       cons(makeCString("task-list-item"), Nil));
		Obj attrs = cons(intern("@"), cons(tmp, Nil));
		primSet(r->co, r->curr, cons(attrs, cons(intern("li"), Nil)));

		Obj tmp1 = cons(intern("type"),
				cons(makeCString("checkbox"), Nil));
		Obj tmp2 = cons(intern("class"),
				cons(makeCString("task-list-item-checkbox"),
				     Nil));
		attrs = cons(intern("@"), cons(tmp1, cons(tmp2, Nil)));

		Obj tail = Nil;
		if (det->task_mark == 'x' || det->task_mark == 'X') {
			tail = cons(intern("checked"), tail);
		}
		Obj input = cons(intern("input"),
				 cons(attrs, cons(intern("disabled"), tail)));
		append_curr(r, input);

		// RENDER_VERBATIM(r, "<li class=\"task-list-item\">"
		//                   "<input type=\"checkbox\" class=\"task-list-item-checkbox\" disabled");
		// if(det->task_mark == 'x' || det->task_mark == 'X')
		//     RENDER_VERBATIM(r, " checked");
		// RENDER_VERBATIM(r, ">");
	} else {
		render_verbatim_enter(r, "li");
	}
}

static void
render_open_ol_block(MD_HTML * r, const MD_BLOCK_OL_DETAIL * det) {
	char buf[64];

	render_verbatim_enter(r, "ol");
	if (det->start == 1) {
		return;
	}

	Obj tmp = cons(intern("start"), cons(makeNumber(det->start), Nil));
	Obj attrs = cons(intern("@"), cons(tmp, Nil));
	append_curr(r, attrs);
	// snprintf(buf, sizeof(buf), "<ol start=\"%u\">\n", det->start);
	// RENDER_VERBATIM(r, buf);
}

static void
render_open_code_block(MD_HTML * r, const MD_BLOCK_CODE_DETAIL * det) {
	md_html_push(r);
	primSet(r->co, r->curr, cons(intern("pre"), Nil));
	md_html_push(r);

	/* If known, output the HTML 5 attribute class="language-LANGNAME". */
	Obj attrs = Nil;
	if (det->lang.text != NULL) {
		attrs = cons(intern("@"), attrs);
		primSet(r->co, r->curr, cons(intern("class"), Nil));
		render_attribute(r, &det->lang, render_append_text1);
		Obj tmp = reverse(symbolGet(r->curr));
		attrs = cons(tmp, attrs);
	}

	primSet(r->co, r->curr, cons(intern("code"), Nil));
	if (attrs != Nil) {
		append_curr(r, attrs);
	}
}

static int
enter_block_callback(MD_BLOCKTYPE type, void *detail, void *userdata) {
	static const MD_CHAR *head[6] =
		{ "h1", "h2", "h3", "h4", "h5", "h6" };
	MD_HTML *r = (MD_HTML *) userdata;

	switch (type) {
	case MD_BLOCK_DOC:	/* noop */
		break;
	case MD_BLOCK_QUOTE:
		render_verbatim_enter(r, "blockquote");
		break;
	case MD_BLOCK_UL:
		render_verbatim_enter(r, "ul");
		break;
	case MD_BLOCK_OL:
		render_open_ol_block(r, (const MD_BLOCK_OL_DETAIL *) detail);
		break;
	case MD_BLOCK_LI:
		render_open_li_block(r, (const MD_BLOCK_LI_DETAIL *) detail);
		break;
	case MD_BLOCK_HR:
		append_curr(r, cons(intern("hr"), Nil));
		break;
	case MD_BLOCK_H:
		render_verbatim_enter(r, head[((MD_BLOCK_H_DETAIL *)
					       detail)->level - 1]);
		break;
	case MD_BLOCK_CODE:
		render_open_code_block(r,
				       (const MD_BLOCK_CODE_DETAIL *) detail);
		break;
	case MD_BLOCK_HTML:	/* noop */
		break;
	case MD_BLOCK_P:
		render_verbatim_enter(r, "p");
		break;
	case MD_BLOCK_TABLE:
		render_verbatim_enter(r, "table");
		break;
	case MD_BLOCK_THEAD:
		render_verbatim_enter(r, "thead");
		break;
	case MD_BLOCK_TBODY:
		render_verbatim_enter(r, "tbody");
		break;
	case MD_BLOCK_TR:
		render_verbatim_enter(r, "tr");
		break;
		/* case MD_BLOCK_TH:       render_open_td_block(r, "th", (MD_BLOCK_TD_DETAIL*)detail); break; */
		/* case MD_BLOCK_TD:       render_open_td_block(r, "td", (MD_BLOCK_TD_DETAIL*)detail); break; */
	}

	return 0;
}


static int
leave_block_callback(MD_BLOCKTYPE type, void *detail, void *userdata) {
	static const MD_CHAR *head[6] =
		{ "</h1>\n", "</h2>\n", "</h3>\n", "</h4>\n", "</h5>\n",
		"</h6>\n"
	};
	MD_HTML *r = (MD_HTML *) userdata;

	switch (type) {
	case MD_BLOCK_DOC:	/*noop */
		break;
	case MD_BLOCK_QUOTE:
		render_verbatim_leave(r);
		break;
	case MD_BLOCK_UL:
		render_verbatim_leave(r);
		break;
	case MD_BLOCK_OL:
		render_verbatim_leave(r);
		break;
	case MD_BLOCK_LI:
		render_verbatim_leave(r);
		break;
	case MD_BLOCK_HR:	/*noop */
		break;
	case MD_BLOCK_H:
		render_verbatim_leave(r);
		break;
	case MD_BLOCK_CODE:{
			render_verbatim_leave(r);
			render_verbatim_leave(r);
			break;
		}
	case MD_BLOCK_HTML:	/* noop */
		break;
	case MD_BLOCK_P:
		render_verbatim_leave(r);
		break;
	case MD_BLOCK_TABLE:
		render_verbatim_leave(r);
		break;
	case MD_BLOCK_THEAD:
		render_verbatim_leave(r);
		break;
	case MD_BLOCK_TBODY:
		render_verbatim_leave(r);
		break;
	case MD_BLOCK_TR:
		render_verbatim_leave(r);
		break;
	case MD_BLOCK_TH:
		render_verbatim_leave(r);
		break;
	case MD_BLOCK_TD:
		render_verbatim_leave(r);
		break;
	}

	return 0;
}

static void
render_url_escaped1(MD_HTML * r, const MD_CHAR * data, MD_SIZE size) {
	append_curr(r, makeString(data, size));
}

static void
render_url_escaped(MD_HTML * r, const MD_CHAR * data, MD_SIZE size) {
	static const MD_CHAR hex_chars[] = "0123456789ABCDEF";
	MD_OFFSET beg = 0;
	MD_OFFSET off = 0;

	/* Some characters need to be escaped in URL attributes. */
	/* #define NEED_URL_ESC(ch)    (r->escape_map[(unsigned char)(ch)] & NEED_URL_ESC_FLAG) */

	while (1) {
		/* while(off < size  &&  !NEED_URL_ESC(data[off])) */
		while (off < size)
			off++;
		if (off > beg)
			/* render_verbatim_enter(r, data + beg, off - beg); */
			render_verbatim_enter(r, data + beg);

		if (off < size) {
			char hex[3];

			switch (data[off]) {
				/* case '&':   RENDER_VERBATIM(r, "&amp;"); break; */
			default:
				hex[0] = '%';
				hex[1] = hex_chars[((unsigned) data[off] >> 4)
						   & 0xf];
				hex[2] = hex_chars[((unsigned) data[off] >> 0)
						   & 0xf];
				/* render_verbatim(r, hex, 3); */
				break;
			}
			off++;
		} else {
			break;
		}

		beg = off;
	}
}

static void
render_open_a_span(MD_HTML * r, const MD_SPAN_A_DETAIL * det) {
	md_html_push(r);

	Obj attrs = cons(intern("@"), Nil);

	primSet(r->co, r->curr, cons(intern("href"), Nil));
	render_attribute(r, &det->href, render_url_escaped1);
	Obj tmp = reverse(symbolGet(r->curr));
	attrs = cons(tmp, attrs);

	if (det->title.text != NULL) {
		primSet(r->co, r->curr, cons(intern("title"), Nil));
		render_attribute(r, &det->title, render_url_escaped1);
		Obj tmp1 = reverse(symbolGet(r->curr));
		attrs = cons(tmp1, attrs);
		// curr = cons(intern("title"), curr);
		// render_attribute(r, &det->title, render_html_escaped);
	}
	attrs = reverse(attrs);
	primSet(r->co, r->curr, cons(attrs, cons(intern("a"), Nil)));
}

static void
render_open_img_span(MD_HTML * r, const MD_SPAN_IMG_DETAIL * det) {
	md_html_push(r);

	primSet(r->co, r->curr, cons(intern("src"), Nil));
	render_attribute(r, &det->src, render_url_escaped1);
	Obj tmp = reverse(symbolGet(r->curr));
	Obj attrs = cons(intern("@"), cons(tmp, Nil));
	primSet(r->co, r->curr, cons(attrs, cons(intern("img"), Nil)));
}

static void
render_close_img_span(MD_HTML * r, const MD_SPAN_IMG_DETAIL * det) {
	if (det->title.text != NULL) {
		// RENDER_VERBATIM(r, "\" title=\"");
		// render_attribute(r, &det->title, render_html_escaped);
	}

	render_verbatim_leave(r);
}

static int
enter_span_callback(MD_SPANTYPE type, void *detail, void *userdata) {
	MD_HTML *r = (MD_HTML *) userdata;
	/* int inside_img = (r->image_nesting_level > 0); */

	/* We are inside a Markdown image label. Markdown allows to use any emphasis
	 * and other rich contents in that context similarly as in any link label.
	 *
	 * However, unlike in the case of links (where that contents becomescontents
	 * of the <a>...</a> tag), in the case of images the contents is supposed to
	 * fall into the attribute alt: <img alt="...">.
	 *
	 * In that context we naturally cannot output nested HTML tags. So lets
	 * suppress them and only output the plain text (i.e. what falls into text()
	 * callback).
	 *
	 * CommonMark specification declares this a recommended practice for HTML
	 * output.
	 */
	/* if(type == MD_SPAN_IMG) */
	/*     r->image_nesting_level++; */
	/* if(inside_img) */
	/*     return 0; */

	switch (type) {
	case MD_SPAN_EM:
		render_verbatim_enter(r, "em");
		break;
	case MD_SPAN_STRONG:
		render_verbatim_enter(r, "strong");
		break;
	case MD_SPAN_U:
		render_verbatim_enter(r, "<u>");
		break;
	case MD_SPAN_A:
		render_open_a_span(r, (MD_SPAN_A_DETAIL *) detail);
		break;
	case MD_SPAN_IMG:
		render_open_img_span(r, (MD_SPAN_IMG_DETAIL *) detail);
		break;
	case MD_SPAN_CODE:
		render_verbatim_enter(r, "code");
		break;
	case MD_SPAN_DEL:
		render_verbatim_enter(r, "del");
		break;
	case MD_SPAN_LATEXMATH:
		render_verbatim_enter(r, "<x-equation>");
		break;
	case MD_SPAN_LATEXMATH_DISPLAY:
		render_verbatim_enter(r, "<x-equation type=\"display\">");
		break;
		/* case MD_SPAN_WIKILINK:          render_open_wikilink_span(r, (MD_SPAN_WIKILINK_DETAIL*) detail); break; */
	}

	return 0;
}

static int
leave_span_callback(MD_SPANTYPE type, void *detail, void *userdata) {
	MD_HTML *r = (MD_HTML *) userdata;

	/* if(type == MD_SPAN_IMG) */
	/*     r->image_nesting_level--; */
	/* if(r->image_nesting_level > 0) */
	/*     return 0; */

	switch (type) {
	case MD_SPAN_EM:
		render_verbatim_leave(r);
		break;
	case MD_SPAN_STRONG:
		render_verbatim_leave(r);
		break;
	case MD_SPAN_U:
		render_verbatim_leave(r);
		break;
	case MD_SPAN_A:
		render_verbatim_leave(r);
		break;
	case MD_SPAN_IMG:
		render_close_img_span(r, (MD_SPAN_IMG_DETAIL *) detail);
		break;
	case MD_SPAN_CODE:
		render_verbatim_leave(r);
		break;
	case MD_SPAN_DEL:
		render_verbatim_leave(r);
		break;
	case MD_SPAN_LATEXMATH:	/*fall through */
	case MD_SPAN_LATEXMATH_DISPLAY:
		render_verbatim_leave(r);
		break;
	case MD_SPAN_WIKILINK:
		render_verbatim_leave(r);
		break;
	}

	return 0;
}

static int
text_callback(MD_TEXTTYPE type, const MD_CHAR * text, MD_SIZE size,
	      void *userdata) {
	MD_HTML *r = (MD_HTML *) userdata;

	switch (type) {
		/* case MD_TEXT_NULLCHAR:  render_utf8_codepoint(r, 0x0000, render_verbatim); break; */
	case MD_TEXT_BR:
		append_curr(r, cons(intern("br"), Nil));
		break;
		/* case MD_TEXT_SOFTBR:    RENDER_VERBATIM(r, (r->image_nesting_level == 0 ? "\n" : " ")); break; */
	case MD_TEXT_HTML:
		render_verbatim_enter(r, text);
		break;
		/* case MD_TEXT_ENTITY:    render_entity(r, text, size, render_html_escaped); break; */
	default:
		append_curr(r, makeString(text, size));
		break;
	}

	return 0;
}

static void
debug_log_callback(const char *msg, void *userdata) {
	MD_HTML *r = (MD_HTML *) userdata;
	/* if(r->flags & MD_HTML_FLAG_DEBUG) */
	/*     fprintf(stderr, "MD4C: %s\n", msg); */
}

int
md_sxml(struct Cora *co, const MD_CHAR * input, MD_SIZE input_size,
	unsigned parser_flags, Obj * res) {
	MD_HTML render;
	render.co = co;
	render.curr = primGenSym(intern("curr"));
	primSet(co, render.curr, Nil);
	render.stack = primGenSym(intern("stack"));
	render.size = 0;
	render.cap = 0;

	MD_PARSER parser = {
		0,
		parser_flags,
		enter_block_callback,
		leave_block_callback,
		enter_span_callback,
		leave_span_callback,
		text_callback,
		debug_log_callback,
		NULL
	};

	/* Build map of characters which need escaping. */
	for (int i = 0; i < 256; i++) {
		unsigned char ch = (unsigned char) i;

		/* if(strchr("\"&<>", ch) != NULL) */
		/*   render.escape_map[i] |= NEED_HTML_ESC_FLAG; */

		/* if(!ISALNUM(ch)  &&  strchr("~-_.+!*(),%#@?=;:/,+$", ch) == NULL) */
		/*   render.escape_map[i] |= NEED_URL_ESC_FLAG; */
	}

	int succ = md_parse(input, input_size, &parser, (void *) &render);
	Obj curr = symbolGet(render.curr);
	*res = reverse(curr);
	return succ;
}

struct membuffer {
	char *data;
	size_t asize;
	size_t size;
};

static void
membuf_init(struct membuffer *buf, MD_SIZE new_asize) {
	buf->size = 0;
	buf->asize = new_asize;
	buf->data = malloc(buf->asize);
	if (buf->data == NULL) {
		fprintf(stderr, "membuf_init: malloc() failed.\n");
		exit(1);
	}
}

static void
membuf_fini(struct membuffer *buf) {
	if (buf->data)
		free(buf->data);
}

static void
membuf_grow(struct membuffer *buf, size_t new_asize) {
	buf->data = realloc(buf->data, new_asize);
	if (buf->data == NULL) {
		fprintf(stderr, "membuf_grow: realloc() failed.\n");
		exit(1);
	}
	buf->asize = new_asize;
}

static void
membuf_append(struct membuffer *buf, const char *data, MD_SIZE size) {
	if (buf->asize < buf->size + size)
		membuf_grow(buf, buf->size + buf->size / 2 + size);
	memcpy(buf->data + buf->size, data, size);
	buf->size += size;
}


static int
process_file(struct Cora *co, FILE * in, Obj * sxml) {
	size_t n;
	struct membuffer buf_in = { 0 };
	/* struct membuffer buf_out = {0}; */
	int ret = -1;
	clock_t t0, t1;
	/* unsigned p_flags = parser_flags; */
	/* unsigned r_flags = renderer_flags; */

	membuf_init(&buf_in, 32 * 1024);

	/* Read the input file into a buffer. */
	while (1) {
		if (buf_in.size >= buf_in.asize)
			membuf_grow(&buf_in, buf_in.asize + buf_in.asize / 2);

		n = fread(buf_in.data + buf_in.size, 1,
			  buf_in.asize - buf_in.size, in);
		if (n == 0)
			break;
		buf_in.size += n;
	}

	/* Input size is good estimation of output size. Add some more reserve to
	 * deal with the HTML header/footer and tags. */
	/* membuf_init(&buf_out, (MD_SIZE)(buf_in.size + buf_in.size/8 + 64)); */

	/* Special mode for reproduce test case found with fuzzing a tool.
	 * We assume file format as produced by test/fuzzers/fuzz-mdhtml.c. */
	/* if(want_replay_fuzz) { */
	/*     if(buf_in.size < 2 * sizeof(unsigned)) { */
	/*         fprintf(stderr, "File %s isn't valid fuzz test case.\n", in_path); */
	/*         ret = -1; */
	/*         goto out; */
	/*     } */

	/*     /\* Override parser and renderer flags with those form the test case. *\/ */
	/*     p_flags = ((unsigned*)buf_in.data)[0]; */
	/*     r_flags = ((unsigned*)buf_in.data)[1]; */

	/*     /\* And get rid of them from the text input to the parser. *\/ */
	/*     memmove(buf_in.data, buf_in.data + 2 * sizeof(unsigned), */
	/*                 buf_in.size - 2 * sizeof(unsigned)); */
	/*     buf_in.size -= 2 * sizeof(unsigned); */

	/*     /\* Zero the tail we have moved the contents from. */
	/*      * It helps in debugging if make it actually a zero-terminated string. *\/ */
	/*     memset(buf_in.data + buf_in.size, 0, 2 * sizeof(unsigned)); */
	/* } */

	/* Parse the document. This shall call our callbacks provided via the
	 * md_renderer_t structure. */
	/* t0 = clock(); */


	static unsigned parser_flags = 0;
	parser_flags |= MD_FLAG_STRIKETHROUGH;
	parser_flags |= MD_FLAG_TASKLISTS;

	ret = md_sxml(co, buf_in.data, (MD_SIZE) buf_in.size, parser_flags,
		      sxml);

	// t1 = clock();
	if (ret != 0) {
		fprintf(stderr, "Parsing failed.\n");
		goto out;
	}

	/* Write down the document in the HTML format. */
	/*     if(want_fullhtml) { */
	/*         if(want_xhtml) { */
	/*             fprintf(out, "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n"); */
	/*             fprintf(out, "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.1//EN\" " */
	/*                             "\"http://www.w3.org/TR/xhtml11/DTD/xhtml11.dtd\">\n"); */
	/*             fprintf(out, "<html xmlns=\"http://www.w3.org/1999/xhtml\">\n"); */
	/*         } else { */
	/*             fprintf(out, "<!DOCTYPE html>\n"); */
	/*             fprintf(out, "<html>\n"); */
	/*         } */
	/*         fprintf(out, "<head>\n"); */
	/*         fprintf(out, "<title>%s</title>\n", html_title ? html_title : ""); */
	/*         fprintf(out, "<meta name=\"generator\" content=\"md2html\"%s>\n", want_xhtml ? " /" : ""); */
	/* #if !defined MD4C_USE_ASCII && !defined MD4C_USE_UTF16 */
	/*         fprintf(out, "<meta charset=\"UTF-8\"%s>\n", want_xhtml ? " /" : ""); */
	/* #endif */
	/*         if(css_path != NULL) { */
	/*             fprintf(out, "<link rel=\"stylesheet\" href=\"%s\"%s>\n", css_path, want_xhtml ? " /" : ""); */
	/*         } */
	/*         fprintf(out, "</head>\n"); */
	/*         fprintf(out, "<body>\n"); */
	/*     } */

	/*     fwrite(buf_out.data, 1, buf_out.size, out); */

	/*     if(want_fullhtml) { */
	/*         fprintf(out, "</body>\n"); */
	/*         fprintf(out, "</html>\n"); */
	/*     } */

	/*     if(want_stat) { */
	/*         if(t0 != (clock_t)-1  &&  t1 != (clock_t)-1) { */
	/*             double elapsed = (double)(t1 - t0) / CLOCKS_PER_SEC; */
	/*             if (elapsed < 1) */
	/*                 fprintf(stderr, "Time spent on parsing: %7.2f ms.\n", elapsed*1e3); */
	/*             else */
	/*                 fprintf(stderr, "Time spent on parsing: %6.3f s.\n", elapsed); */
	/*         } */
	/*     } */

	/* Success if we have reached here. */
	ret = 0;

      out:
	membuf_fini(&buf_in);
	/* membuf_fini(&buf_out); */

	return ret;
}

static void
md2sxml(struct Cora *co) {
	Obj tmp = co->args[1];
	char *filePath = stringStr(tmp).str;
	FILE *in = fopen(filePath, "rb");
	if (in == NULL) {
		fprintf(stderr, "Cannot open file %s\n", filePath);
		coraReturn(co, Nil);
		return;
	}
	Obj sxml = Nil;
	int succ = process_file(co, in, &sxml);
	if (succ != 0) {
		fprintf(stderr, "process file fail%s\n", filePath);
		coraReturn(co, Nil);
		return;
	}
	coraReturn(co, sxml);
}

struct registerModule md4cModule = {
	NULL,
	{
	 {"process-file", md2sxml, 1},
	 {NULL, NULL, 0}
	 }
};

void
entry(struct Cora *co) {
	Obj pkg = co->args[2];
	registerAPI(co, &md4cModule, stringStr(pkg));
	coraReturn(co, intern("md4c"));
}


#ifdef DEBUG
int
main(int argc, char *argv[]) {
	uintptr_t dummy;
	struct Cora *co = coraNew();
	coraInit(co, &dummy);

	FILE *in;
	in = fopen("about.md", "rb");
	if (in == NULL) {
		fprintf(stderr, "Cannot open file.\n");
		exit(1);
	}
	Obj sxml;
	process_file(co, in, &sxml);
}
#endif
