#include "main.h"

/**
 * get_bit - is function to get bit with index that it have
 *
 * @n: is a parameter.
 * @index: is index
 *
 * Return: values 0 or 1
 */

int get_bit(unsigned long int n, unsigned int index)

{
	if (index > (sizeof(n) * 8) - 1)
	{
		return (-1);
	}

	if (n & ((1 << index)) == 0)
	{
		return (0);
	}

	else
	{
		return (1);
	}
}
