#include "main.h"

/**
* _strspn - function return firt occurence of @c.
* @s: is parameter1.
* @accept: is parameter2.
*
* Return: pointer to destination string.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
