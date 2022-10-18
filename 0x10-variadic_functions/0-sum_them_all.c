#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - is a variadic function to return sum of all parameter.
 *
 * @n: is initalized parameter.
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list mylist;

	va_start(mylist, n);

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			sum += va_arg(mylist, unsigned int);

		}
		va_end(mylist);
		return (sum);
	}
	return (0);


}
