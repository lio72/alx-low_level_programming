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
	int memo, i, j;

	j = n - 1;

	for (i = 0; i < n; i++)
	{
		memo = a[i];
		a[i] = a[j];
		a[j] =  memo;
		j--;
	}
}
