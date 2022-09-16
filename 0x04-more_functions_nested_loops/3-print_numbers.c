#include "main.h"

/**
 * print_numbers - fuction test if enter is digit
 *
 *
 * Return: always 0 (sucess)
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');

}
