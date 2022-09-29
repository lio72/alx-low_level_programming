#include "main.h"

/**
* _strlen_recursion - function that concatenates two strings.
* @s: pointer to destination string.
*
* Return: pointer to destination string.
*/

int _strlen_recursion(char *s)

{
	if (*s == '\0')
	{
		return (0);
	}

	return (strlen(s));
}
