#include "main.h"
#include <stdio.h>

/**
 * print_binary - converts a int to binary
 * @n: is a parameter.
 *
 * Return: nothing.
 */

void print_binary(unsigned long int n)
{
	int i = 0, dp, exp;
	unsigned long int val, val1;

	val = n;
	while (val != 0)
	{
		i++;
		val = val >> 1;
	}
	while (i != 0)
	{
		val1 = n;
		dp = i - 1;
		exp = 1;
		while (dp > 0)
		{
			exp = exp * 2;
			dp--;
		}
		val1 = (val1 & exp)  >> i - 1;
		printf("%d", val1);
		i--;
	}
}
