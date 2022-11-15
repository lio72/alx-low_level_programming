#include "main.h"

/**
 * clear_bit - is function to set bit with index that it have
 *
 * @n: is a parameter.
 * @index: is index
 *
 * Return: values 0 or 1
 */

int clear_bit(unsigned long int *n, unsigned int index)

{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	*n = *n & (~(1 << index));
	return (1);
}
