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

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;

	}
	while (dest[j] != '\0')
	{
		j++;
	}
	dest[j] = '\0';

	return (dest);

}
