#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - name is function to print name
 *
 * @size: is parameter 1
 * @array: is pointer on function
 * @action: is on function as parameter
 *
 * Return: 0
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
	{
		return;
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
