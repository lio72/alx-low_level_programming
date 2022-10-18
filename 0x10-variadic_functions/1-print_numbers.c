#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - is the function that can print all parameneter.
 *
 * @separator: is initalized parameter.
 * @n: second parameter.
 *
 * Return: nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
	unsigned int i;
	va_list mylist;

	va_start(mylist, n);

	for (i = 0; i < n; i++)
	{
		if (separator)
		{
			printf("%s%d", separator, a_arg(mylist, unsigned int));
		}
		else if (serapator && i == 0)
		{
			printf("%d", a_arg(mylist, unsigned int));
		}
		else
		{
			printf("%d", a_arg(mylist, unsigned int));
		}
	}
	va_end(mylist);
	printf("\n");
}
