#include "main.h"

/**
* _strpbrk - function return firt occurence of @c.
* @s: is parameter1.
* @accept: is parameter2.
*
* Return: pointer to destination string.
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}
