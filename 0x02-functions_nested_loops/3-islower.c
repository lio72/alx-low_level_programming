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

int _islower(int c)

{
	int res;

	res = islower(c);
	if (res > 0)
	{
		return (1);
	}
	else if (res == 0)
	{
		return (0);
	}
}
