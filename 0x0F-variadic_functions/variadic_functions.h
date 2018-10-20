#ifndef _VAR_FUNCS_
#define _VAR_FUNCS_

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

typedef struct typ
{
	char t;
	void (*type_name)(va_list list);
} type_print;

#endif /* _VAR_FUNCS_ */

