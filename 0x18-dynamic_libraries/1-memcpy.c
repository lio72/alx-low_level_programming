#include "main.h"

/**
* _memcpy - function copy in @dest @n fist octec of mémory @src.
* @dest: is parameter1.
* @src: is parameter2.
* @n: is parameter3.
*
* Return: pointer to destination string.
*/

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);

}
