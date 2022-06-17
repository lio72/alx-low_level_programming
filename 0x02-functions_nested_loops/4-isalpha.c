#include "main.h"
#include <ctype.h>

/**
 * _islower - function to print string
 *
 * print_alphabet - write the character
 * Return: always 0 (sucess)
 * @c : is parameter
 * islower - is local fuction that we use
 */

int _isalpha(int c)

{
	int res;

	res = isalpha(c);

	if (res > 0)
	{
		res = 1;
	}
	else
	{
	}
	return (res);
}
