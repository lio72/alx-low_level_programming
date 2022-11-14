#include "main.h"

/**
 * print_binary - converts a int to binary
 * @n: is a parameter.
 *
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
