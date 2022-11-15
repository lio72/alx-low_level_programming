#include "main.h"

/**
 * flip_bits - is function to set bit with index that it have
 *
 * @n: is a parameter.
 * @m: is a parameter2
 *
 * Return: values 0 or 1
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned long int xor, bit;

	xor = n ^ m;
	bit =  0;
	while (xor > 0)
	{
		bit = bit + (xor & 1);
		xor = xor >> 1;
	}
	return (bit);
}
