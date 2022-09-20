#include "main.h"

/**
 * swap_int - is function to update values
 *
 * @a : is parameter
 * @b : is parameter
 * return 0
 *
 */

void swap_int(int *a, int *b)
{
	int *c;

	*c = *a;
	*a = *b;
	*b = *c;
}
