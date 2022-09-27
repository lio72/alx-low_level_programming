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
	int i, j = 0;
	char c;

	for (i = n - 1; i >= 0; i--)
	{
		c = *(dest + i);
		*(dest + i) =  src[j];
		src = c;
		j++;
	}

	return (s);

}
