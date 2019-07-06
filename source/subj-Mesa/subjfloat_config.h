
/*----------------------------------------------------------------------------
| The following macros are defined to indicate all the subject functions that
| exist.
*----------------------------------------------------------------------------*/

#ifdef __STDC_VERSION__
#if 199901L <= __STDC_VERSION__
#define SUBJ_F32_MULADD
#endif
#endif

#ifdef FLOAT64

#define SUBJ_F64_ADD
#define SUBJ_F64_SUB
#define SUBJ_F64_MUL
#ifdef __STDC_VERSION__
#if 199901L <= __STDC_VERSION__
#define SUBJ_F64_MULADD
#endif
#endif

#endif

