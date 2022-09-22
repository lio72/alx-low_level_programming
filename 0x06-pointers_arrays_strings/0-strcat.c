#include "main.h"
/**
 * _strcat - this is a funcion strcat
 * @dest: first param
 * @src: second param
 * Return: a pointer to the destination string dest
 */

char *_strcat(int *dest, int *src)
{
	int i = 0;
	int k;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (k = 0; src[k] != '\0'; k++)
	{
		dest[i] = src[k];
		i++;
	}

	return (dest);

}
