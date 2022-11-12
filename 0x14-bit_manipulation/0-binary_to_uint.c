#include "main.h"

/**
* binary_to_uint - function that convert binary to int.
*
* @b: is parameter2.
* Return: value to convert in int.
*/

unsigned int binary_to_uint(const char *b)

{
	int i = len(b);
	unsigned int val = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (i >= 0)
	{
		if (*(b + i) != "0" || *(b + i) != "1")
		{
			return (0);
		}
		else if (*(b + i) & 1)
		{
			val = val + exp(i);
		}
		i--;
	}
	return (val);
}
