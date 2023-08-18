#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - fnx prints nums followed by a new line
 * @separator: str that will be printed btwn num
 * @n: num of ints passed into the fnx
 * @...: var num of nums which is printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numss;
	unsigned int indice;

	va_start(numss, n);

	for (indice = 0; indice < n; indice++)
	{
		printf("%d", va_arg(numss, int));

		if (indice != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(numss);
}
