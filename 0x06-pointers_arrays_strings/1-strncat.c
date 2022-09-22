#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 *
 * @dest : is the parmeter1.
 * @src : is the parameter2.
 * @n : is the number of char to concanter.
 *
 *return dest .
 */

char *_strncat(char *dest, char *src, int n)

{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' &&  j <= n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);

}
