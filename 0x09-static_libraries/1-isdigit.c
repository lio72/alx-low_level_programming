#include "main.h"
#include <stdio.h>

/**
 * _isdigit - fuction test if enter is digit
 *
 *@c : is parameter
 * Return: always 0 (sucess)
 */

int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
