#include "main.h"
#include <ctype.h>

/**
 * _abs- give absolu value of one number
 *
 * Return: always valus (sucess)
 * @n : is parameter
 */

int _abs(int n)

{

	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
