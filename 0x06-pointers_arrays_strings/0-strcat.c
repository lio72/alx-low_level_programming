#include "main.h"

/**
 * _strcat - concanter @dest and @src
 *
 * @dest : is parameter
 * @src : is parmeter
 *
 * Return : @dest
 *
 */

char *_strcat(int *dest, int *src)
{
	int i = 0;
	int k;

	while (dest[i])
	{
		i++;
	}
	for (k = 0; src[k]; k++)
	{
		dest[i] = src[k];
		i++;
	}

	return (dest);

}
