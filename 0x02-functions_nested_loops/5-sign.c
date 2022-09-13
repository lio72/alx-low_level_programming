#include "main.h"
#include <ctype.h>

/**
 * print_sign - function to print string
 *
 * Return: always valus (sucess)
 * @n : is parameter
 *
 */

int print_sign(int n)

{
	int res;

	if (n > 0)
	{
		res = 1;
	}
	else if (n < 0)
	{
		res = -1;
	}
	else
	{
		res = 0;
	}
	return (res);
}
