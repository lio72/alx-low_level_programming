#include "main.h"

/**
 * *_strcat - return value of sting cam
 *
 * @dest : is parameter
 * @src : is parmeter
 * Return dest cat
 *
 */

char *_strcat(int *dest, int *src)

{
	int i = 0, k;

	while (dest[i] != 0)
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
