#include "main.h"
#include <stdio.h>

/**
 * _isupper - function to print string
 *
 *@c : is parameter
 * Return: always 0 (sucess)
 */

int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
