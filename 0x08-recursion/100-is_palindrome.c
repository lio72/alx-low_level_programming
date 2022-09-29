#include "main.h"
#include <string.h>

/**
* _is_palindrome - function that concatenates two strings.
* @s: pointer to destination string.
*
* Return: pointer to destination string.
*/

int is_palindrome(char *s)

{
	if (*s == '\0')
	{
		return (0);
	}

	return (strlen(s));
}
