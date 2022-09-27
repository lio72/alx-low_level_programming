#include "main.h"

/**
* _strchr - function return firt occurence of @c.
* @s: is parameter1.
* @c: is parameter2.
*
* Return: pointer to destination string.
*/

char *_strchr(char *s, char c);

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
