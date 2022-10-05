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
	int i;

	s = malloc(sizeof(char) * size);

	if (size == 0)
	{
		s = NULL;
	}

	else
	{
		for (i = 0; i < size - 1; i++)
		{
			s[i] = c;
		}
		s[size] = '\0';
	}

	return (s);
}
