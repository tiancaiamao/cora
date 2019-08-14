

scmHead* frame1[];
scmHead* frame2[];
scmHead** frame;

struct Frame {
  scmHead* data[];
  int size;
  int cap;
};

void gc(m *VM) {
  for (int i=0; i<m->stackTop; i++) {
    Obj o = m->stack[i];
    mark(nframe, o);
  }

  sweep(oframe);
  frame = nframe;
}


void mark(struct Frame *frame, Obj o) {
  scmHead* head = ptr(o);
  if (isMarked(*head)) {
    return
  }

  switch (head) {
  case scmHeadVector:
  case scmHeadString:
  case scmHeadClosure:
    struct scmClosure* clo = head;
    for (int i=0; i<sizeof(clo->args)/sizeof(Obj); i++) {
      mark(frame, clo->args[i]);
    }
  case scmHeadSymbol:
    mark(frame, ((struct scmSymbol*)(head))->value);
  }
  // copy this object to the new frame;
  return
}

void sweep(struct Frame *frame) {
  for (int i = 0; i < frame->size; i++) {
    scmHead* ptr = frame->data[i];
    if (isMarked(*ptr)) {
      free(ptr);
    }
  }
}
