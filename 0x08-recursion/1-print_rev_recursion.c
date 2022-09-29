#include "main.h"

/**
* _print_rev_recursion - function that concatenates two strings.
* @s: pointer to destination string.
*
* Return: pointer to destination string.
*/

void _print_rev_recursion(char *s)

{
	if (*s ==  '\0')
	{
		_putchar(*s);

	}
	else
	{
		_putchar('\n');
	}
}
