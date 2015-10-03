#include <assert.h>
#include <stdarg.h>
#include <stdint.h>

struct PCB {
  void* AllocationPointer;
  void* AllocationRedline;
  void* FramePointer;
  void* FrameBase;
  void* FrameRedline;
  void* NextK;
  void* SystemStack;
};
typedef PCB_t struct PCB;

/** --------------------------------------------------------------------
 ** Basic object related macros.
 ** ----------------------------------------------------------------- */

#define wordshift 3
#define wordsize 8
typedef uintptr_t Value;

/* When  a  Scheme  object's  memory  block  is  moved  by  the  garbage

   collector: the first word of the old memory block is overwritten with
   a  special  value,  the  "forward   pointer",  which  is  the  symbol
   RT_FORWARD_PTR.  See the garbage collector for details.

     Notice that when the garbage collector scans memory: it interpretes
   every machine word with all the bits set to 1 as RT_FORWARD_PTR.

   NOTE This definition  must be kept in sync with  the primitive Scheme
   operation "$forward-ptr?". */
#define RT_FORWARD_PTR	((Value)-1)

#define RT_ALIGN_SHIFT	(1 + wordshift)
#define RT_ALIGN_SIZE	(2 * wordsize)
#define immediate_tag	7

#define RT_TAGOF(X)	(((uint64_t)(X)) & 7)

#define RT_PTR(X,N)	((Value*)(((uint64_t)(X)) + ((iksword_t)(N))))
#define RT_REF(X,N)	(RT_PTR(X,N)[0])

/* Special offsets to be used  with "RT_REF()" and "RT_PTR()" applied to
   UNtagged pointers. */
#define disp_1st_word	(0*wordsize)
#define disp_2nd_word	(1*wordsize)
#define disp_3rd_word	(2*wordsize)
#define disp_4th_word	(3*wordsize)
#define disp_5th_word	(4*wordsize)

/* This  macro computes  the number  of  bytes to  reserve in  allocated
   memory for the  data area of a Scheme object;  the reserved memory is
   always  an even  number  of machine  words, at  least  2.  On  32-bit
   platforms: the granularity of the aligned sizes is 8 bytes; on 64-bit
   platforms: the granularity of the aligned sizes is 16 bytes.

     This is: to satisfy the garbage  collector, which needs 2 words for
   its machinery; to have untagged pointers to Scheme objects with the 3
   least significant bits set to zero. */
#define RT_ALIGN(NUMBER_OF_BYTES) \
  ((((NUMBER_OF_BYTES) + RT_ALIGN_SIZE - 1) >> RT_ALIGN_SHIFT) << RT_ALIGN_SHIFT)

#define RT_FALSE_OBJECT		((Value)0x2F)
#define RT_TRUE_OBJECT		((Value)0x3F)
#define RT_NULL_OBJECT		((Value)0x4F)
#define RT_EOF_OBJECT		((Value)0x5F)
#define RT_VOID_OBJECT		((Value)0x7F)

/* Special machine word value stored in locations that used to hold weak
   references to values which have been already garbage collected. */
#define RT_BWP_OBJECT		((Value)0x8F)

/* Special machine word value stored  in the "value" and "proc" field of
   Scheme symbol memory blocks to signal that these fields are unset. */
#define RT_UNBOUND_OBJECT	((Value)0x6F)

#define RT_FALSE		RT_FALSE_OBJECT
#define RT_TRUE			RT_TRUE_OBJECT
#define RT_NULL			RT_NULL_OBJECT
#define RT_EOF			RT_EOF_OBJECT
#define RT_VOID			RT_VOID_OBJECT
#define RT_BWP			RT_BWP_OBJECT
#define RT_UNBOUND		RT_UNBOUND_OBJECT

/** --------------------------------------------------------------------
 ** Fixnum objects.
 ** ----------------------------------------------------------------- */

#define fx_tag		0
#define fx_shift	wordshift
#define fx_mask		(wordsize - 1)

#define most_positive_fixnum	(((uint64_t)-1) >> (fx_shift+1))
#define most_negative_fixnum	(most_positive_fixnum+1)
#define RT_GREATEST_FIXNUM	most_positive_fixnum
#define RT_LEAST_FIXNUM		(-most_negative_fixnum)

#define RT_FIX(X)	((Value)(((iksword_t)(X)) << fx_shift))
#define RT_UNFIX(X)	(((iksword_t)(X)) >> fx_shift)
#define RT_IS_FIXNUM(X)	((((uint64_t)(X)) & fx_mask) == fx_tag)

  Value	ikrt_fxrandom		(Value x);

/** --------------------------------------------------------------------
 ** Pair and list objects.
 ** ----------------------------------------------------------------- */

#define pair_size	(2 * wordsize)
#define pair_mask	7 /* #b111 */
#define pair_tag	1
#define disp_car	0
#define disp_cdr	wordsize
#define off_car		(disp_car - pair_tag)
#define off_cdr		(disp_cdr - pair_tag)

#define RT_IS_PAIR(X)	(pair_tag == (((uint64_t)(X)) & pair_mask))

#define RT_CAR(PAIR)		    RT_REF((PAIR), off_car)
#define RT_CDR(PAIR)		    RT_REF((PAIR), off_cdr)
#define RT_CAAR(PAIR)		    RT_CAR(RT_CAR(PAIR))
#define RT_CDAR(PAIR)		    RT_CDR(RT_CAR(PAIR))
#define RT_CADR(PAIR)		    RT_CAR(RT_CDR(PAIR))
#define RT_CDDR(PAIR)		    RT_CDR(RT_CDR(PAIR))

#define RT_CAR_PTR(PAIR)	RT_PTR((PAIR), off_car)
#define RT_CDR_PTR(PAIR)	RT_PTR((PAIR), off_cdr)
#define RT_CAAR_PTR(PAIR)	RT_CAR_PTR(RT_CAR(PAIR))
#define RT_CDAR_PTR(PAIR)	RT_CDR_PTR(RT_CAR(PAIR))
#define RT_CADR_PTR(PAIR)	RT_CAR_PTR(RT_CDR(PAIR))
#define RT_CDDR_PTR(PAIR)	RT_CDR_PTR(RT_CDR(PAIR))

#define IKA_PAIR_ALLOC(PCB)	(rt_safe_alloc((PCB),  pair_size) | pair_tag)
#define IKU_PAIR_ALLOC(PCB)	(rt_unsafe_alloc((PCB),pair_size) | pair_tag)

  Value ika_pair_alloc		(struct PCB * pcb);
  Value iku_pair_alloc		(struct PCB * pcb);
  uint64_t rt_list_length	(Value x);
  void rt_list_to_argv		(Value x, char **argv);
  void rt_list_to_argv_and_argc	(Value x, char **argv, long *argc);

  Value ika_list_from_argv	(struct PCB * pcb, char ** argv);
  Value ika_list_from_argv_and_argc(struct PCB * pcb, char ** argv, long argc);

/** --------------------------------------------------------------------
 ** Character objects.
 ** ----------------------------------------------------------------- */

typedef uint32_t	ikchar_t;
typedef ikchar_t	ikchar;

#define char_tag	0x0F
#define char_mask	0xFF
#define char_shift	8

#define RT_IS_CHAR(X)		(char_tag == (char_mask & (Value)(X)))

#define RT_CHAR_FROM_INTEGER(X) \
  ((Value)((((uint64_t)(X)) << char_shift) | char_tag))

#define RT_CHAR32_FROM_INTEGER(X) \
  ((ikchar_t)((((uint64_t)(X)) << char_shift) | char_tag))

#define RT_CHAR_TO_INTEGER(X) \
  ((uint64_t)(((Value)(X)) >> char_shift))

#define RT_CHAR32_TO_INTEGER(X)		((uint32_t)(((ikchar_t)(X)) >> char_shift))

#define RT_UNICODE_FROM_ASCII(ASCII)	((uint64_t)(ASCII))


/** --------------------------------------------------------------------
 ** String objects.
 ** ----------------------------------------------------------------- */

#define RT_STRING_CHAR_SIZE	4
#define string_mask		7
#define string_tag		6
#define disp_string_length	0
#define disp_string_data	wordsize
#define off_string_length	(disp_string_length - string_tag)
#define off_string_data		(disp_string_data   - string_tag)

#define RT_IS_STRING(X)			(string_tag == (string_mask & (Value)(X)))
#define RT_STRING_LENGTH_FX(STR)	RT_REF((STR), off_string_length)
#define RT_STRING_LENGTH(STR)		RT_UNFIX(RT_REF((STR), off_string_length))
#define RT_CHAR32(STR,IDX)		(((ikchar_t*)(((Value)(STR)) + off_string_data))[IDX])

#define RT_STRING_DATA_VOIDP(STR)	((void*)(((Value)(STR)) + off_string_data))
#define RT_STRING_DATA_IKCHARP(STR)	((ikchar_t*)(((Value)(STR)) + off_string_data))

  Value ika_string_alloc	(struct PCB * pcb, uint64_t number_of_chars);
  Value ika_string_from_cstring	(struct PCB * pcb, const char * cstr);

  Value iku_string_alloc	(struct PCB * pcb, uint64_t number_of_chars);
  Value iku_string_from_cstring	(struct PCB * pcb, const char * cstr);
  Value iku_string_to_symbol	(struct PCB * pcb, Value s_str);

  Value ikrt_string_to_symbol	(Value, struct PCB* pcb);
  Value ikrt_strings_to_gensym	(Value, Value,	struct PCB* pcb);

/** --------------------------------------------------------------------
 ** Symbol objects.
 ** ----------------------------------------------------------------- */

#define symbol_tag			((Value) 0x5F)
#define symbol_mask			((Value) 0xFF)
#define disp_symbol_record_tag		0
#define disp_symbol_record_string	(1 * wordsize)
#define disp_symbol_record_ustring	(2 * wordsize)
#define disp_symbol_record_value	(3 * wordsize)
#define disp_symbol_record_proc		(4 * wordsize)
#define disp_symbol_record_plist	(5 * wordsize)
#define symbol_record_size		(6 * wordsize)

#define off_symbol_record_tag		(disp_symbol_record_tag	    - vector_tag)
#define off_symbol_record_string	(disp_symbol_record_string  - vector_tag)
#define off_symbol_record_ustring	(disp_symbol_record_ustring - vector_tag)
#define off_symbol_record_value		(disp_symbol_record_value   - vector_tag)
#define off_symbol_record_proc		(disp_symbol_record_proc    - vector_tag)
#define off_symbol_record_plist		(disp_symbol_record_plist   - vector_tag)

  int   rt_is_symbol		(Value obj);
  Value iku_symbol_from_string	(struct PCB * pcb, Value s_str);

/** --------------------------------------------------------------------
 ** Bignum objects.
 ** ----------------------------------------------------------------- */

#define bignum_mask		0x7
#define bignum_tag		0x3
#define bignum_sign_mask	0x8
#define bignum_sign_shift	3
#define bignum_nlimbs_shift	4
#define disp_bignum_tag		0
#define disp_bignum_data	wordsize
#define off_bignum_tag		(disp_bignum_tag  - vector_tag)
#define off_bignum_data		(disp_bignum_data - vector_tag)

#define RT_BNFST_NEGATIVE(X)		(((uint64_t)(X)) & bignum_sign_mask)
#define RT_BNFST_POSITIVE(X)		(!RT_BNFST_NEGATIVE(X))
#define RT_BNFST_LIMB_COUNT(X)		(((uint64_t)(X)) >> bignum_nlimbs_shift)

#define RT_BIGNUM_ALLOC_SIZE(NUMBER_OF_LIMBS)			\
  RT_ALIGN(disp_bignum_data + (NUMBER_OF_LIMBS) * wordsize)

#define IKA_BIGNUM_ALLOC(PCB,LIMB_COUNT)	\
  (rt_safe_alloc((PCB), RT_BIGNUM_ALLOC_SIZE(LIMB_COUNT)) | vector_tag)

#define RT_COMPOSE_BIGNUM_FIRST_WORD(LIMB_COUNT,SIGN)		\
  ((Value)(((LIMB_COUNT) << bignum_nlimbs_shift) | (SIGN) | bignum_tag))

#define RT_POSITIVE_BIGNUM_FIRST_WORD(LIMB_COUNT)		\
  RT_COMPOSE_BIGNUM_FIRST_WORD((LIMB_COUNT),((0)<<bignum_sign_shift))

#define RT_NEGATIVE_BIGNUM_FIRST_WORD(LIMB_COUNT)		\
  RT_COMPOSE_BIGNUM_FIRST_WORD((LIMB_COUNT),((1)<<bignum_sign_shift))

#define RT_BIGNUM_DATA_LIMBP(X)					\
  ((mp_limb_t*)(uint64_t)((X) + off_bignum_data))

#define RT_BIGNUM_DATA_VOIDP(X)					\
  ((void *)(uint64_t)((X) + off_bignum_data))

#define RT_BIGNUM_FIRST_LIMB(X)					\
  ((mp_limb_t)RT_REF((X), off_bignum_data))

#define RT_BIGNUM_LAST_LIMB(X,LIMB_COUNT)			\
  ((mp_limb_t)RT_REF((X), off_bignum_data+((LIMB_COUNT)-1)*wordsize))

#define RT_BIGNUM_FIRST(X)	RT_REF((X), off_bignum_tag)
#define RT_LIMB(X,IDX)		RT_REF((X), off_bignum_data + (IDX)*wordsize)

int	rt_is_bignum		(Value x);

Value	ika_integer_from_int	(struct PCB* pcb, int N);
Value	ika_integer_from_long	(struct PCB* pcb, long N);
Value	ika_integer_from_llong	(struct PCB* pcb, rt_llong N);
Value	ika_integer_from_uint	(struct PCB* pcb, rt_uint N);
Value	ika_integer_from_ulong	(struct PCB* pcb, rt_ulong N);
Value	ika_integer_from_ullong	(struct PCB* pcb, rt_ullong N);

Value	ika_integer_from_sint8	(struct PCB* pcb, int8_t N);
Value	ika_integer_from_sint16	(struct PCB* pcb, int16_t N);
Value	ika_integer_from_sint32	(struct PCB* pcb, int32_t N);
Value	ika_integer_from_sint64	(struct PCB* pcb, int64_t N);
Value	ika_integer_from_uint8	(struct PCB* pcb, uint8_t N);
Value	ika_integer_from_uint16	(struct PCB* pcb, uint16_t N);
Value	ika_integer_from_uint32	(struct PCB* pcb, uint32_t N);
Value	ika_integer_from_uint64	(struct PCB* pcb, uint64_t N);

Value	ika_integer_from_off_t	(struct PCB * pcb, off_t N);
Value	ika_integer_from_ssize_t(struct PCB * pcb, ssize_t N);
Value	ika_integer_from_size_t	(struct PCB * pcb, size_t N);
Value	ika_integer_from_ptrdiff_t(struct PCB * pcb, ptrdiff_t N);

Value	ika_integer_from_sword	(struct PCB* pcb, iksword_t N);
Value	ika_integer_from_uword	(struct PCB* pcb, uint64_t N);

int8_t	 rt_integer_to_sint8	(Value x);
int16_t	 rt_integer_to_sint16	(Value x);
int32_t	 rt_integer_to_sint32	(Value x);
int64_t	 rt_integer_to_sint64	(Value x);
uint8_t	 rt_integer_to_uint8	(Value x);
uint16_t rt_integer_to_uint16	(Value x);
uint32_t rt_integer_to_uint32	(Value x);
uint64_t rt_integer_to_uint64	(Value x);

int	 rt_integer_to_int	(Value x);
long	 rt_integer_to_long	(Value x);
rt_llong rt_integer_to_llong	(Value x);
rt_uint	 rt_integer_to_uint	(Value x);
rt_ulong  rt_integer_to_ulong	(Value x);
rt_ullong rt_integer_to_ullong	(Value x);

off_t	rt_integer_to_off_t	(Value x);
size_t	rt_integer_to_size_t	(Value x);
ssize_t	rt_integer_to_ssize_t	(Value x);
ptrdiff_t rt_integer_to_ptrdiff_t (Value x);

iksword_t	ika_integer_to_sword	(struct PCB* pcb, Value X);
uint64_t	ika_integer_to_uword	(struct PCB* pcb, Value X);

/* inspection */
Value	ikrt_positive_bn	(Value x);
Value	ikrt_even_bn		(Value x);

/* arithmetics */
Value	ikrt_fxfxplus		(Value x, Value y, struct PCB* pcb);
Value	ikrt_fxbnplus		(Value x, Value y, struct PCB* pcb);
Value	ikrt_bnbnplus		(Value x, Value y, struct PCB* pcb);

Value	ikrt_fxfxminus		(Value x, Value y, struct PCB* pcb);
Value	ikrt_fxbnminus		(Value x, Value y, struct PCB* pcb);
Value	ikrt_bnfxminus		(Value x, Value y, struct PCB* pcb);
Value	ikrt_bnbnminus		(Value x, Value y, struct PCB* pcb);

Value	ikrt_bnnegate		(Value x, struct PCB* pcb);

Value	ikrt_fxfxmult		(Value x, Value y, struct PCB* pcb);
Value	ikrt_fxbnmult		(Value x, Value y, struct PCB* pcb);
Value	ikrt_bnbnmult		(Value x, Value y, struct PCB* pcb);

Value	ikrt_bnbncomp		(Value bn1, Value bn2);

Value	ikrt_bnlognot		(Value x, struct PCB* pcb);
Value	ikrt_fxbnlogand		(Value x, Value y, struct PCB* pcb);
Value	ikrt_bnbnlogand		(Value x, Value y, struct PCB* pcb);
Value	ikrt_fxbnlogor		(Value x, Value y, struct PCB* pcb);
Value	ikrt_bnbnlogor		(Value x, Value y, struct PCB* pcb);
Value	ikrt_bignum_shift_right	(Value x, Value y, struct PCB* pcb);
Value	ikrt_fixnum_shift_left	(Value x, Value y, struct PCB* pcb);
Value	ikrt_bignum_shift_left	(Value x, Value y, struct PCB* pcb);

Value	ikrt_bnbndivrem		(Value x, Value y, struct PCB* pcb);
Value	ikrt_bnfxdivrem		(Value x, Value y, struct PCB* pcb);
Value	ikrt_bnfx_modulo	(Value x, Value y /*, struct PCB* pcb */);
Value	ikrt_bignum_length	(Value x);

Value	ikrt_exact_fixnum_sqrt	(Value fx /*, struct PCB* pcb*/);
Value	ikrt_exact_bignum_sqrt	(Value bn, struct PCB* pcb);

Value	ikrt_bignum_to_bytevector (Value x, struct PCB* pcb);
Value	ikrt_bignum_to_flonum	(Value bn, Value more_bits, Value fl);

Value	ikrt_bignum_hash	(Value bn /*, struct PCB* pcb */);

/** --------------------------------------------------------------------
 ** Ratnum objects.
 ** ----------------------------------------------------------------- */

#define ratnum_tag		((Value) 0x27)
#define disp_ratnum_tag		0
#define disp_ratnum_num		(1 * wordsize)
#define disp_ratnum_den		(2 * wordsize)
#define disp_ratnum_unused	(3 * wordsize)
#define ratnum_size		(4 * wordsize)

#define off_ratnum_tag		(disp_ratnum_tag    - vector_tag)
#define off_ratnum_num		(disp_ratnum_num    - vector_tag)
#define off_ratnum_den		(disp_ratnum_den    - vector_tag)
#define off_ratnum_unused	(disp_ratnum_unused - vector_tag)

#define RT_IS_RATNUM(X)		((vector_tag == RT_TAGOF(X)) && \
				 (ratnum_tag == RT_REF(X, off_ratnum_tag)))

#define RT_RATNUM_TAG(X)	RT_REF((X), off_ratnum_tag)
#define RT_RATNUM_NUM(X)	RT_REF((X), off_ratnum_num)
#define RT_RATNUM_DEN(X)	RT_REF((X), off_ratnum_den)

#define RT_RATNUM_NUM_PTR(X)	RT_PTR((X), off_ratnum_num)
#define RT_RATNUM_DEN_PTR(X)	RT_PTR((X), off_ratnum_den)

int	rt_is_ratnum			(Value X);
Value	ika_ratnum_alloc_no_init	(struct PCB * pcb);
Value	ika_ratnum_alloc_and_init	(struct PCB * pcb);

/** --------------------------------------------------------------------
 ** Compnum objects.
 ** ----------------------------------------------------------------- */

#define compnum_tag		((Value) 0x37)
#define disp_compnum_tag	0
#define disp_compnum_real	(1 * wordsize)
#define disp_compnum_imag	(2 * wordsize)
#define disp_compnum_unused	(3 * wordsize)
#define compnum_size		(4 * wordsize)

#define off_compnum_tag		(disp_compnum_tag    - vector_tag)
#define off_compnum_real	(disp_compnum_real   - vector_tag)
#define off_compnum_imag	(disp_compnum_imag   - vector_tag)
#define off_compnum_unused	(disp_compnum_unused - vector_tag)

#define RT_IS_COMPNUM(X)	((vector_tag  == RT_TAGOF(X)) && \
				 (compnum_tag == RT_COMPNUM_TAG(X)))

#define RT_COMPNUM_TAG(X)	RT_REF((X), off_compnum_tag)
#define RT_COMPNUM_REAL(X)	RT_REF((X), off_compnum_real)
#define RT_COMPNUM_IMAG(X)	RT_REF((X), off_compnum_imag)
#define RT_COMPNUM_REP(X)	RT_REF((X), off_compnum_real)
#define RT_COMPNUM_IMP(X)	RT_REF((X), off_compnum_imag)

#define RT_COMPNUM_REAL_PTR(X)	RT_PTR((X), off_compnum_real)
#define RT_COMPNUM_IMAG_PTR(X)	RT_PTR((X), off_compnum_imag)
#define RT_COMPNUM_REP_PTR(X)	RT_PTR((X), off_compnum_real)
#define RT_COMPNUM_IMP_PTR(X)	RT_PTR((X), off_compnum_imag)

  int	rt_is_compnum	(Value X);
  Value	ika_compnum_alloc_no_init	(struct PCB * pcb);
  Value	ika_compnum_alloc_and_init	(struct PCB * pcb);

/** --------------------------------------------------------------------
 ** Flonum objects.
 ** ----------------------------------------------------------------- */

#define flonum_tag		((Value)0x17)
#define flonum_size		16 /* four 32-bit words, two 64-bit words */
#define disp_flonum_tag		0 /* not f(wordsize) */
#define disp_flonum_data	8 /* not f(wordsize) */
#define off_flonum_tag		(disp_flonum_tag  - vector_tag)
#define off_flonum_data		(disp_flonum_data - vector_tag)

#define IKU_DEFINE_AND_ALLOC_FLONUM(VARNAME)				\
  Value VARNAME = rt_unsafe_alloc(pcb, flonum_size) | vector_tag;	\
  RT_REF(VARNAME, off_flonum_tag) = (Value)flonum_tag

#define RT_FLONUM_TAG(X)	RT_REF((X), off_flonum_tag)
#define RT_FLONUM_DATA(X)	(*((double*)(((uint64_t)(X))+off_flonum_data)))
#define RT_FLONUM_VOIDP(X)	((void*)(((uint64_t)(X))+((iksword_t)off_flonum_data)))

#define RT_IS_FLONUM(X)		((vector_tag == RT_TAGOF(X)) && (flonum_tag == RT_FLONUM_TAG(X)))

int   rt_is_flonum		(Value obj);
Value iku_flonum_alloc	(struct PCB * pcb, double fl);
Value ika_flonum_from_double	(struct PCB* pcb, double N);
Value ikrt_flonum_hash	(Value x /*, struct PCB* pcb */);

/** --------------------------------------------------------------------
 ** Cflonum objects.
 ** ----------------------------------------------------------------- */

#define cflonum_tag		((Value) 0x47)
#define disp_cflonum_tag	0
#define disp_cflonum_real	(1 * wordsize)
#define disp_cflonum_imag	(2 * wordsize)
#define disp_cflonum_unused	(3 * wordsize)
#define cflonum_size		(4 * wordsize)

#define off_cflonum_tag		(disp_cflonum_tag    - vector_tag)
#define off_cflonum_real	(disp_cflonum_real   - vector_tag)
#define off_cflonum_imag	(disp_cflonum_imag   - vector_tag)
#define off_cflonum_unused	(disp_cflonum_unused - vector_tag)

#define RT_IS_CFLONUM(X)	((vector_tag  == RT_TAGOF(X)) && \
				 (cflonum_tag == RT_CFLONUM_TAG(X)))

#define IKU_DEFINE_AND_ALLOC_CFLONUM(VARNAME)				\
    Value VARNAME = rt_unsafe_alloc(pcb, cflonum_size) | vector_tag;	\
    RT_CFLONUM_TAG(VARNAME) = (Value)cflonum_tag;

#define RT_CFLONUM_TAG(X)	RT_REF((X), off_cflonum_tag)
#define RT_CFLONUM_REAL(X)	RT_REF((X), off_cflonum_real)
#define RT_CFLONUM_IMAG(X)	RT_REF((X), off_cflonum_imag)
#define RT_CFLONUM_REP(X)	RT_REF((X), off_cflonum_real)
#define RT_CFLONUM_IMP(X)	RT_REF((X), off_cflonum_imag)

#define RT_CFLONUM_REAL_PTR(X)	RT_PTR((X), off_cflonum_real)
#define RT_CFLONUM_IMAG_PTR(X)	RT_PTR((X), off_cflonum_imag)
#define RT_CFLONUM_REP_PTR(X)	RT_PTR((X), off_cflonum_real)
#define RT_CFLONUM_IMP_PTR(X)	RT_PTR((X), off_cflonum_imag)

#define RT_CFLONUM_REAL_DATA(X)	RT_FLONUM_DATA(RT_CFLONUM_REAL(X))
#define RT_CFLONUM_IMAG_DATA(X)	RT_FLONUM_DATA(RT_CFLONUM_IMAG(X))
#define RT_CFLONUM_REP_DATA(X)	RT_FLONUM_DATA(RT_CFLONUM_REAL(X))
#define RT_CFLONUM_IMP_DATA(X)	RT_FLONUM_DATA(RT_CFLONUM_IMAG(X))

int	rt_is_cflonum			(Value X);
Value iku_cflonum_alloc_and_init	(struct PCB * pcb, double re, double im);
Value	ika_cflonum_from_doubles	(struct PCB* pcb, double re, double im);

/** --------------------------------------------------------------------
 ** Pointer objects.
 ** ----------------------------------------------------------------- */

#define pointer_tag		((Value) 0x107)
#define disp_pointer_tag	0
#define disp_pointer_data	(1 * wordsize)
#define pointer_size		(2 * wordsize)
#define off_pointer_tag		(disp_pointer_tag  - vector_tag)
#define off_pointer_data	(disp_pointer_data - vector_tag)

  Value ika_pointer_alloc	(struct PCB* pcb, uint64_t memory);
  Value iku_pointer_alloc	(struct PCB* pcb, uint64_t memory);
  Value ikrt_is_pointer		(Value X);
  int	rt_is_pointer		(Value X);

#define RT_IS_POINTER(X)		((vector_tag  == RT_TAGOF(X)) && \
					 (pointer_tag == RT_POINTER_TAG(X)))

#define RT_POINTER_TAG(X)		RT_REF((X), off_pointer_tag)

#define RT_POINTER_DATA(X)		RT_REF((X), off_pointer_data)
#define RT_POINTER_DATA_VOIDP(X)	((void *)   RT_REF((X), off_pointer_data))
#define RT_POINTER_DATA_CHARP(X)	((char *)   RT_REF((X), off_pointer_data))
#define RT_POINTER_DATA_UINT8P(X)	((uint8_t *)RT_REF((X), off_pointer_data))
#define RT_POINTER_DATA_LONG(X)		((long)	    RT_REF((X), off_pointer_data))
#define RT_POINTER_DATA_LLONG(X)	((rt_llong) RT_REF((X), off_pointer_data))
#define RT_POINTER_DATA_ULONG(X)	((rt_ulong) RT_REF((X), off_pointer_data))
#define RT_POINTER_DATA_ULLONG(X)	((rt_ullong)RT_REF((X), off_pointer_data))

#define RT_POINTER_DATA_WORD(X)		((rt_uword_t)RT_REF((X), off_pointer_data))

#define RT_POINTER_SET(X,P)	(RT_REF((X), off_pointer_data) = (Value)((void*)(P)))
#define RT_POINTER_SET_NULL(X)	(RT_REF((X), off_pointer_data) = 0)
#define RT_POINTER_IS_NULL(X)	(0 == RT_POINTER_DATA(X))

/** --------------------------------------------------------------------
 ** Vector objects.
 ** ----------------------------------------------------------------- */

#define vector_mask		7
#define vector_tag		5
#define disp_vector_length	0
#define disp_vector_data	wordsize
#define off_vector_length	(disp_vector_length - vector_tag)
#define off_vector_data		(disp_vector_data   - vector_tag)

  Value ika_vector_alloc_no_init	(struct PCB * pcb, uint64_t number_of_items);
  Value ika_vector_alloc_and_init	(struct PCB * pcb, uint64_t number_of_items);

  Value iku_vector_alloc_no_init	(struct PCB * pcb, uint64_t number_of_items);
  Value iku_vector_alloc_and_init (struct PCB * pcb, uint64_t number_of_items);

  int   rt_is_vector		(Value s_vec);
  Value ikrt_vector_clean		(Value s_vec);
  Value ikrt_vector_copy		(Value s_dst, Value s_dst_start,
					 Value s_src, Value s_src_start,
					 Value s_count, struct PCB * pcb);

#define RT_IS_VECTOR(OBJ)		((vector_tag == ((OBJ) & vector_mask)) && RT_IS_FIXNUM(RT_REF((OBJ), off_vector_length)))

#define RT_VECTOR_LENGTH_FX(VEC)	RT_REF((VEC), off_vector_length)
#define RT_VECTOR_LENGTH(VEC)		RT_UNFIX(RT_VECTOR_LENGTH_FX(VEC))
#define RT_ITEM(VEC,IDX)		RT_REF((VEC), off_vector_data + (IDX) * wordsize)
#define RT_VECTOR_DATA_VOIDP(VEC)	((void*)((Value)((VEC)+off_vector_data)))

#define RT_ITEM_PTR(VEC,IDX)		RT_PTR((VEC), off_vector_data + (IDX) * wordsize)

/** --------------------------------------------------------------------
 ** Bytevector objects.
 ** ----------------------------------------------------------------- */

#define bytevector_mask		7
#define bytevector_tag		2
#define disp_bytevector_length	0
#define disp_bytevector_data	8 /* not f(wordsize) */
#define off_bytevector_length	(disp_bytevector_length - bytevector_tag)
#define off_bytevector_data	(disp_bytevector_data	- bytevector_tag)

#define RT_IS_BYTEVECTOR(X)	(bytevector_tag == (((uint64_t)(X)) & bytevector_mask))

  Value ika_bytevector_alloc		(struct PCB * pcb, uint64_t requested_number_of_bytes);
  Value ika_bytevector_from_cstring	(struct PCB * pcb, const char * cstr);
  Value ika_bytevector_from_cstring_len	(struct PCB * pcb, const char * cstr, size_t len);
  Value ika_bytevector_from_memory_block	(struct PCB * pcb, const void * memory,
						 size_t length);
  Value ika_bytevector_from_utf16z	(struct PCB * pcb, const void * data);
  Value ikrt_bytevector_copy (Value s_dst, Value s_dst_start,
				    Value s_src, Value s_src_start,
				    Value s_count);

#define RT_BYTEVECTOR_LENGTH_FX(BV)	RT_REF((BV), off_bytevector_length)
#define RT_BYTEVECTOR_LENGTH(BV)	RT_UNFIX(RT_BYTEVECTOR_LENGTH_FX(BV))

#define RT_BYTEVECTOR_DATA(BV)		((uint64_t)((BV) + off_bytevector_data))
#define RT_BYTEVECTOR_DATA_VOIDP(BV)	((void*)   RT_BYTEVECTOR_DATA(BV))
#define RT_BYTEVECTOR_DATA_CHARP(BV)	((char*)   RT_BYTEVECTOR_DATA(BV))
#define RT_BYTEVECTOR_DATA_UINT8P(BV)	((uint8_t*)RT_BYTEVECTOR_DATA(BV))

/** --------------------------------------------------------------------
 ** Struct objects.
 ** ----------------------------------------------------------------- */

#define record_mask			7
#define record_tag			vector_tag
#define disp_record_rtd			0
#define disp_record_data		wordsize
#define off_record_rtd			(disp_record_rtd  - record_tag)
#define off_record_data			(disp_record_data - record_tag)

#define rtd_tag				record_tag
#define disp_rtd_rtd			0
#define disp_rtd_name			(1 * wordsize)
#define disp_rtd_length			(2 * wordsize)
#define disp_rtd_fields			(3 * wordsize)
#define disp_rtd_printer		(4 * wordsize)
#define disp_rtd_symbol			(5 * wordsize)
#define disp_rtd_destructor		(6 * wordsize)
#define rtd_size			(7 * wordsize)

#define off_rtd_rtd			(disp_rtd_rtd		- rtd_tag)
#define off_rtd_name			(disp_rtd_name		- rtd_tag)
#define off_rtd_length			(disp_rtd_length	- rtd_tag)
#define off_rtd_fields			(disp_rtd_fields	- rtd_tag)
#define off_rtd_printer			(disp_rtd_printer	- rtd_tag)
#define off_rtd_symbol			(disp_rtd_symbol	- rtd_tag)
#define off_rtd_destructor		(disp_rtd_destructor	- rtd_tag)

Value ika_struct_alloc_and_init	(struct PCB * pcb, Value rtd);
Value ika_struct_alloc_no_init	(struct PCB * pcb, Value rtd);
int   rt_is_struct			(Value R);

#define RT_IS_STRUCT(OBJ)		((record_tag == (record_mask & (OBJ))) && \
					 (record_tag == (record_mask & RT_STRUCT_STD(OBJ))))

#define RT_STD_STD(STD)			RT_REF((STD), off_rtd_rtd)
#define RT_STD_NAME(STD)		RT_REF((STD), off_rtd_name)
#define RT_STD_LENGTH(STD)		RT_REF((STD), off_rtd_length)
#define RT_STD_FIELDS(STD)		RT_REF((STD), off_rtd_fields)
#define RT_STD_PRINTER(STD)		RT_REF((STD), off_rtd_printer)
#define RT_STD_SYMBOL(STD)		RT_REF((STD), off_rtd_symbol)
#define RT_STD_DESTRUCTOR(STD)		RT_REF((STD), off_rtd_destructor)

#define RT_STRUCT_RTD(STRUCT)		RT_REF((STRUCT), off_record_rtd)
#define RT_STRUCT_STD(STRUCT)		RT_REF((STRUCT), off_record_rtd)
#define RT_STRUCT_RTD_PTR(STRUCT)	RT_PTR((STRUCT), off_record_rtd)
#define RT_STRUCT_STD_PTR(STRUCT)	RT_PTR((STRUCT), off_record_rtd)

#define RT_FIELD(STRUCT,FIELD)		RT_REF((STRUCT), (off_record_data+(FIELD)*wordsize))
#define RT_FIELD_PTR(STRUCT,FIELD)	RT_PTR((STRUCT), (off_record_data+(FIELD)*wordsize))

#define RT_STRUCT_FIELDS_VOIDP(STRU)	((void *)((STRU) + off_record_data))

/** --------------------------------------------------------------------
 ** Port objects.
 ** ----------------------------------------------------------------- */

#define port_tag		0x3F
#define port_mask		0x3F
#define disp_port_attrs		0)
#define disp_port_index		(1 * wordsize)
#define disp_port_size		(2 * wordsize)
#define disp_port_buffer	(3 * wordsize)
#define disp_port_transcoder	(4 * wordsize)
#define disp_port_id		(5 * wordsize)
#define disp_port_read		(6 * wordsize)
#define disp_port_write		(7 * wordsize)
#define disp_port_get_position	(8 * wordsize)
#define disp_port_set_position	(9 * wordsize)
#define disp_port_close		(10 * wordsize)
#define disp_port_cookie	(11 * wordsize)
#define disp_port_unused1	(12 * wordsize)
#define disp_port_unused2	(13 * wordsize)
#define port_size		(14 * wordsize)

#define off_port_attrs		(disp_port_attrs	- vector_tag)
#define off_port_index		(disp_port_index	- vector_tag)
#define off_port_size		(disp_port_size		- vector_tag)
#define off_port_buffer		(disp_port_buffer	- vector_tag)
#define off_port_transcoder	(disp_port_transcoder	- vector_tag)
#define off_port_id		(disp_port_id		- vector_tag)
#define off_port_read		(disp_port_read		- vector_tag)
#define off_port_write		(disp_port_write	- vector_tag)
#define off_port_get_position	(disp_port_get_position	- vector_tag)
#define off_port_set_position	(disp_port_set_position	- vector_tag)
#define off_port_close		(disp_port_close	- vector_tag)
#define off_port_cookie		(disp_port_cookie	- vector_tag)
#define off_port_unused1	(disp_port_unused1	- vector_tag)
#define off_port_unused2	(disp_port_unused2	- vector_tag)

/** --------------------------------------------------------------------
 ** Code objects.
 ** ----------------------------------------------------------------- */

/* To assert that a machine word X references a code object we do:

     Value	X;
     assert(code_primary_tag == (code_primary_mask & X));
     assert(code_tag         == RT_REF(X, off_code_tag));
*/
#define code_primary_mask	vector_mask
#define code_primary_tag	vector_tag
#define code_tag		((Value)0x2F)

#define disp_code_tag		0
#define disp_code_code_size	(1 * wordsize)
#define disp_code_reloc_vector	(2 * wordsize)
#define disp_code_freevars	(3 * wordsize)
#define disp_code_annotation	(4 * wordsize)
#define disp_code_unused	(5 * wordsize)
#define disp_code_data		(6 * wordsize)

#define off_code_tag		(disp_code_tag		- code_primary_tag)
#define off_code_code_size	(disp_code_code_size	- code_primary_tag)
#define off_code_reloc_vector	(disp_code_reloc_vector	- code_primary_tag)
#define off_code_freevars	(disp_code_freevars	- code_primary_tag)
#define off_code_annotation	(disp_code_annotation	- code_primary_tag)
#define off_code_unused		(disp_code_unused	- code_primary_tag)
#define off_code_data		(disp_code_data		- code_primary_tag)

#define RT_IS_CODE(X)		\
     ((code_primary_tag == (code_primary_mask & X)) && \
      (code_tag         == RT_REF(X, off_code_tag)))

/* Given a reference  to code object: return a raw  pointer to the entry
   point in the code, as "Value". */
#define RT_CODE_ENTRY_POINT(CODE)	(((Value)(CODE)) + ((Value)off_code_data))

rt_private_decl Value rt_stack_frame_top_to_code_object (Value top);

/* ------------------------------------------------------------------ */

/* Accessors for the words of relocation vector's records. */
#undef  RT_RELOC_RECORD_REF
#define RT_RELOC_RECORD_REF(VEC,IDX)	RT_REF((VEC),(IDX)*wordsize)
#undef  RT_RELOC_RECORD_1ST
#define RT_RELOC_RECORD_1ST(VEC)	RT_RELOC_RECORD_REF((VEC),0)
#undef  RT_RELOC_RECORD_2ND
#define RT_RELOC_RECORD_2ND(VEC)	RT_RELOC_RECORD_REF((VEC),1)
#undef  RT_RELOC_RECORD_3RD
#define RT_RELOC_RECORD_3RD(VEC)	RT_RELOC_RECORD_REF((VEC),2)

/* Least significant  bits tags  for the  first word  in records  of the
   relocation vector for code objects. */
#define RT_RELOC_RECORD_MASK_TAG			0x3 /* = 0b11 */
#define RT_RELOC_RECORD_VANILLA_OBJECT_TAG		0
#define RT_RELOC_RECORD_FOREIGN_ADDRESS_TAG		1
#define RT_RELOC_RECORD_OFFSET_IN_OBJECT_TAG		2
#define RT_RELOC_RECORD_JUMP_TO_LABEL_OFFSET_TAG	3

/* Given a  machine word representing  the bits in  the first word  of a
   record in a relocation vector: evaluate to the record type tag. */
#define RT_RELOC_RECORD_1ST_BITS_TAG(WORD)	((WORD) & RT_RELOC_RECORD_MASK_TAG)

/* Given a  machine word representing  the bits in  the first word  of a
   record in a relocation vector: evaluate to the offset. */
#define RT_RELOC_RECORD_1ST_BITS_OFFSET(WORD)	((WORD) >> 2)

/** --------------------------------------------------------------------
 ** Closure objects.
 ** ----------------------------------------------------------------- */

#define closure_tag		3
#define closure_mask		7
#define disp_closure_code	0
#define disp_closure_data	wordsize
#define off_closure_code	(disp_closure_code - closure_tag)
#define off_closure_data	(disp_closure_data - closure_tag)

#define RT_IS_CLOSURE(X)	((((uint64_t)(X)) & closure_mask) == closure_tag)

#define RT_CLOSURE_ENTRY_POINT(X)	RT_REF((X),off_closure_code)
#define RT_CLOSURE_CODE_OBJECT(X)	(RT_CLOSURE_ENTRY_POINT(X)-off_code_data)
#define RT_CLOSURE_NUMBER_OF_FREE_VARS(X)	\
  RT_UNFIX(RT_REF(RT_CLOSURE_CODE_OBJECT(X), off_code_freevars))
#define RT_CLOSURE_FREE_VAR(X,IDX)	RT_REF((X),off_closure_data+wordsize*(IDX))

/** --------------------------------------------------------------------
 ** Continuation objects.
 ** ----------------------------------------------------------------- */

#define continuation_primary_mask	vector_mask
#define continuation_primary_tag	vector_tag

/* ------------------------------------------------------------------ */

#define continuation_tag		((Value)0x1F)
#define disp_continuation_tag		0
#define disp_continuation_top		(1 * wordsize)
#define disp_continuation_size		(2 * wordsize)
#define disp_continuation_next		(3 * wordsize)
#define continuation_size		(4 * wordsize)

#define off_continuation_tag		(disp_continuation_tag	- vector_tag)
#define off_continuation_top		(disp_continuation_top	- vector_tag)
#define off_continuation_size		(disp_continuation_size - vector_tag)
#define off_continuation_next		(disp_continuation_next - vector_tag)

#define RT_CONTINUATION_STRUCT(KONT)	((ikcont_t *)((uint64_t)((KONT) - vector_tag)))
#define RT_CONTINUATION_TAG(KONT)	RT_REF((KONT),off_continuation_tag)
#define RT_CONTINUATION_TOP(KONT)	RT_REF((KONT),off_continuation_top)
#define RT_CONTINUATION_SIZE(KONT)	RT_REF((KONT),off_continuation_size)
#define RT_CONTINUATION_NEXT(KONT)	RT_REF((KONT),off_continuation_next)

#define RT_IS_CONTINUATION(X)		\
   ((continuation_primary_tag == (continuation_primary_mask & (X))) &&	\
    (continuation_tag         == RT_REF((X), off_continuation_tag)))

/* ------------------------------------------------------------------ */

#define system_continuation_tag		((Value) 0x11F)
#define disp_system_continuation_tag	0
#define disp_system_continuation_top	(1 * wordsize)
#define disp_system_continuation_next	(2 * wordsize)
#define disp_system_continuation_unused (3 * wordsize)
#define system_continuation_size	(4 * wordsize)

#define off_system_continuation_tag	(disp_system_continuation_tag	 - vector_tag)
#define off_system_continuation_top	(disp_system_continuation_top	 - vector_tag)
#define off_system_continuation_next	(disp_system_continuation_next	 - vector_tag)
#define off_system_continuation_unused	(disp_system_continuation_unused - vector_tag)

#define RT_IS_SYSTEM_CONTINUATION(X)	\
   ((continuation_primary_tag == (continuation_primary_mask & (X))) &&	\
    (system_continuation_tag  == RT_REF((X), off_system_continuation_tag)))

/* ------------------------------------------------------------------ */

#define RT_IS_ANY_CONTINUATION(X)	\
   (RT_IS_CONTINUATION(X) || RT_IS_SYSTEM_CONTINUATION(X))

/** --------------------------------------------------------------------
 ** Tcbucket objects.
 ** ----------------------------------------------------------------- */

#define disp_tcbucket_tconc	(0 * wordsize)
#define disp_tcbucket_key	(1 * wordsize)
#define disp_tcbucket_val	(2 * wordsize)
#define disp_tcbucket_next	(3 * wordsize)
#define tcbucket_size		(4 * wordsize)

#define off_tcbucket_tconc	(disp_tcbucket_tconc - vector_tag)
#define off_tcbucket_key	(disp_tcbucket_key   - vector_tag)
#define off_tcbucket_val	(disp_tcbucket_val   - vector_tag)
#define off_tcbucket_next	(disp_tcbucket_next  - vector_tag)

/** --------------------------------------------------------------------
 ** Miscellanous functions.
 ** ----------------------------------------------------------------- */

  Value ikrt_general_copy (Value s_dst, Value s_dst_start,
				 Value s_src, Value s_src_start,
				 Value s_count, struct PCB * pcb);

  void rt_enter_c_function (struct PCB* pcb);
  void rt_leave_c_function (struct PCB* pcb);

/** --------------------------------------------------------------------
 ** Special exact integer object macros.
 ** ----------------------------------------------------------------- */

#define RT_IS_INTEGER(OBJ)	(RT_IS_FIXNUM(OBJ)||rt_is_bignum(OBJ))

/** --------------------------------------------------------------------
 ** Special boolean object macros.
 ** ----------------------------------------------------------------- */

#define RT_IS_BOOLEAN(OBJ)		((RT_FALSE == (OBJ)) || (RT_TRUE == (OBJ)))
#define RT_BOOLEAN_TO_INT(OBJ)		(!(RT_FALSE == (OBJ)))
#define RT_BOOLEAN_FROM_INT(INT)	((INT)? RT_TRUE : RT_FALSE)

/** --------------------------------------------------------------------
 ** Special memory-block object macros.
 ** ----------------------------------------------------------------- */

#define RT_MBLOCK_POINTER(OBJ)		RT_FIELD(OBJ, 0)
#define RT_MBLOCK_SIZE(OBJ)		RT_FIELD(OBJ, 1)
#define RT_MBLOCK_DATA_VOIDP(OBJ)	RT_POINTER_DATA_VOIDP(RT_MBLOCK_POINTER(OBJ))
#define RT_MBLOCK_DATA_CHARP(OBJ)	RT_POINTER_DATA_CHARP(RT_MBLOCK_POINTER(OBJ))
#define RT_MBLOCK_SIZE_T(OBJ)		rt_integer_to_size_t(RT_MBLOCK_SIZE(OBJ))
