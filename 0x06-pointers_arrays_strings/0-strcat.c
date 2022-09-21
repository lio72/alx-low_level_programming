#include "main.h"

/**
 * *_strcat - return value of sting cam
 *
 * @dest : is parameter
 * @src : is parmeter
 * Return @dest
 *
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
