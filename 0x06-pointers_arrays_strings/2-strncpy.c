#include "main.h"

/**
 * _strncpy - function that concatenates two strings and return @dest.
 *
 * @dest: is the parmeter1.
 * @src: is the parameter2.
 * @n: is the number of char to concanter.
 *
 * Return: dest .
 */

char *_strncpy(char *dest, char *src, int n)

{
	int j = 0;
	char *cache;

	while (j < n && src[j] != '\0')
	{
		cache[j] = src[j];
		j++;

	}
	while (dest[j] != '\0')
	{
		cache[j] = dest[j];
	}
	cache[j] = '\0';
	dest = cache;

	return (dest);

}
