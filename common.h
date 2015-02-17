#ifndef _H_LUACJSON_COMMON_H_
#define _H_LUACJSON_COMMON_H_
#ifdef _MSC_VER
#define MISSING_ISINF
#include <float.h>
#include <ctype.h>
#define snprintf _snprintf
#define isnan _isnan
static int strncasecmp(const char *s1, const char *s2, int n)
{
	while (--n >= 0 && toupper((unsigned char)*s1) == toupper((unsigned char)*s2++)) if (*s1++ == '/0')  return 0;
	return(n < 0 ? 0 : toupper((unsigned char)*s1) - toupper((unsigned char)*--s2));
}
#endif
#ifndef __cplusplus

#ifdef __GNUC__
	#include <stdbool.h>
	#define inline __inline __attribute__((always_inline))
#elif defined(_MSC_VER) 
	#define inline __forceinline
	#define bool char
	#define true 1
	#define false 0
#endif	/* __GNUC__ */

#endif	/* __cplusplus */
#endif

