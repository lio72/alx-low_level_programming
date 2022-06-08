#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - function to print string
 *
 * _putchar - write the character
 * Return: always 0 (sucess)
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	printf("\n");

}
