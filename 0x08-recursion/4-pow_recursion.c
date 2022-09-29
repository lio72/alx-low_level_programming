#include "main.h"
#include <math.h>

/**
* _pow_recursion - function that concatenates two strings.
* @x: is number to calculate.
* @y: is number2
*
* Return: pointer to destination string.
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (_pow_recursion(x, y - 1) * x);
}
