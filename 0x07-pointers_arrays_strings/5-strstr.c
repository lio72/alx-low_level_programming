#include "main.h"

/**
* _strstr - function return firt occurence of @c.
* @haystack: is parameter1.
* @needle: is parameter2.
*
* Return: pointer to destination string.
*/

char *_strstr(char *haystack, char *needle)

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
