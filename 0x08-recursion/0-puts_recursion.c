#include "main.h"

/**
* _puts_recursion - function that concatenates two strings.
* @s: pointer to destination string.
*
* Return: pointer to destination string.
*/

void _puts_recursion(char *s)
{
	int i = 0;

	_putchar(s[i]);
	i++;

	if (s[i] != '\0')
	{
		_puts_recursion(s[i]);
	}
	else
	{
		_putchar('\n');
	}
}
