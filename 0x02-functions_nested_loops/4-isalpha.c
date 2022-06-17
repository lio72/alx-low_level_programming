#include "main.h"
#include <ctype.h>

/**
 * _isalpha - function to print string
 *
 * print_alphabet - write the character
 * Return: always 0 (sucess)
 * @c : is parameter
 * isalpha - is local fuction that we use
 */

int _isalpha(int c)

{
	int res;
	
	c = toupper((unsigned char) c);

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
