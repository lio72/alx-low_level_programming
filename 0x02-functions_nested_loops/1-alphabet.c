#include "main.h"
/**
 * print_alphabet - function to print string 
 *@c : is character
 *
 * _putchar is 
 * Return: always 0 (sucess)
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar("\n");
}
