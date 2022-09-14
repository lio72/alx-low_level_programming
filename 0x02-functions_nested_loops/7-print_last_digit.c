#include "main.h"
#include <ctype.h>

/**
 * print_last_digit - print last digit on one number
 *
 * Return: always valus (sucess)
 * @n : is parameter
 */

int print_last_digit(int n)

{	int val = n % 10;
	if (val < 0)
	{
		val = val * -1;
	}
	_putchar(val);
	return (val);
}
