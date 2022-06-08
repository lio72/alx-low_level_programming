#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - function to print string
 *
 * _putchar - write the character
 * Return: always 0 (sucess)
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		printf("\n");
	}

}
