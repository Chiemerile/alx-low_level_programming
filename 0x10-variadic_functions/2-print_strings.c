#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - fnx prints strs flowed by a new line
 * @separator: str to printed inbtw strs
 * @n: tot num of strs passed into fnx
 * @...: var num of strs into be printed
 * Descr: if separator is NULL, it is not printed
 * if one of the strs if NULL, (nil) is printed instead
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int indice;

	va_start(strings, n);

	for (indice = 0; indice < n; indice++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (indice != (n - 1) && separator != NULL)
			printf("%s", separator);
		}
	printf("\n");

	va_end(strings);
}
