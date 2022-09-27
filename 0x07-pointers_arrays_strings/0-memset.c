#include "main.h"

/**
* _memset - function that copy in @n fist octec of mémory @b.
* @s: is parameter1.
* @b: is parameter2.
* @n: is parameter3.
*
* Return: pointer to destination string.
*/

char *_memset(char *s, char b, unsigned int n)

{
	int i;

	for (i = n; i > 0; i--)
	{
		*(s + i) =  b;
	}

	return (s);

}
