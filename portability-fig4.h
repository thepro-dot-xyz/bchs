#ifndef	CONFIG_H
#define	CONFIG_H

#define HAVE_MEMMEM
#define HAVE_STRTONUM

#if !defined(__BEGIN_DECLS)
#  ifdef __cplusplus
#  define __BEGIN_DECLS extern "C" {
#  else
#  define __BEGIN_DECLS
#  endif
#endif
#if !defined(__END_DECLS)
#  ifdef __cplusplus
#  define __END_DECLS }
#  else
#  define __END_DECLS
#  endif
#endif

#ifndef HAVE_STRTONUM
extern long long strtonum
	(const char *numstr, long long minval, 
	 long long maxval, const char **errstrp);
#endif
#ifndef HAVE_MEMMEM
extern void *memmem
	(const void *l, size_t l_len, 
 	 const void *s, size_t s_len);
#endif

#endif /* CONFIG_H */
