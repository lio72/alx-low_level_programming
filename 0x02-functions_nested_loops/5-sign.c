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
		res = 1;
		printf("+");
	}
	else if (n < 0)
	{
		res = -1;
		printf("-");
	}
	else
	{
		res = 0;
		printf("0");
	}
	return (res);
}
