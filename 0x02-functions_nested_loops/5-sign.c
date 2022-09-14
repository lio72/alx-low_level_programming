#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * print_sign - function to print string
 *
 * Return: always valus (sucess)
 * @n : is parameter
 *putchar : is define in main.h
 */

int print_sign(int n)

{
	int res;

	if (n > 0)
	{
		_putchar("+");
		res = 1
	}
	else if (n < 0)
	{
		_putchar("-");
		res = -1
	}
	else
	{
		_putchar("0");
		res = 0
	}
	return (res);
}
