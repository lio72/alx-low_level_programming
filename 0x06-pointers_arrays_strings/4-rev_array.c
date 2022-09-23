#include "main.h"

/**
 * reverse_array - function that reverse array.
 *
 * @a: is the parmeter1.
 * @n: is the parameter2.
 * Return: nothing.
 */

void reverse_array(int *a, int n)

{
	int memo, i;

	for (i = 0; i < n / 2; i++)
	{
		memo = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] =  memo;

	}
}
