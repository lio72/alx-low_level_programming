#include "main.h"

/**
* print_diagsums - function return firt occurence of @c.
* @a: is parameter1.
* @size: is parameter2.
*
* Return: pointer to destination string.
*/

void print_diagsums(int *a, int size)
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
