#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - is the function that can print all parameneter.
 *
 * @separator: is initalized parameter.
 * @n: second parameter.
 *
 * Return: nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)

{
	unsigned int i;
	va_list mylist;

	va_start(mylist, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
		{
			printf("%d", va_arg(mylist, char));
		}
		else if (separator && i == 0)
		{
			printf("%d", va_arg(mylist, int));
		}
		else
		{
			printf("%s%d", separator, va_arg(mylist, int));
		}
	}
	va_end(mylist);
	printf("\n");
}
