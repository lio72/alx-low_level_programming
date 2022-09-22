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

	while (dest[i++])
	{
		k++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[k] = src[i];
		k++;
	}

	return (dest);

}
