#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - function that concatenates two strings.
* @size: is parameter 1.
* @c: is parameter 2.
*
* Return: pointer to destination string.
*/

char *create_array(unsigned int size, char c)

{
	char *s;
	unsigned int i;


	if (size == 0)
	{
		return (NULL);
	}

	s = (char *)malloc(sizeof(*s) * size);
	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			s[i] = c;
		}
	}

	return (s);
}
