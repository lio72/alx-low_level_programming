#ifndef MAIN_H
#define MAIN_H

int _putchar(char);
unsigned int binary_to_uint(const char *b);

/**
 * len - is the function to calculate len of char
 * @s: is parameter 1
 * Return: i
 */

int len(char *s)
{
	int i;

	for (i = 1; *(s + i) != '\0'; i++)
	{

	}
	return (i);
}

/**
 * exp - is function to calculate exponential 2
 * @n: is parameter2
 * Return: val;
 *
 */

int  exp(int n)
{
	int val = 1;

	for (i = 1; i <= n; i++)
	{
		val = val * 2;
	}
	return (val);
}
#endif
