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

	for (i = 0; i != s['\0']; i++)
	{
		_putchar('s[i]');
	}
	_putchar('\n');
}
