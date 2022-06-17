#include "main.h"

/**
 * main- Entry point
 *
 * Return: always 0 (sucess)
*/

int main(void)

{
	int r;

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('@');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
