#include "main.h"

/**
 * more_numbers - fuction test if enter is digit
 *
 *
 * Return: always 0 (sucess)
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');
		}
	}
	_putchar('\n');

}
