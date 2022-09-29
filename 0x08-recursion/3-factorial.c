#include "main.h"

/**
* factorial - function that concatenates two strings.
* @n: is number to calculate.
*
* Return: pointer to destination string.
*/

int factorial(int n)

{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
