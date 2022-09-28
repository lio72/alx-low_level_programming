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
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}

	}
	return (NULL);

}
