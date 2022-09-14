#include "main.h"

/**
 * times_table - is the function that we write
 * return void
 *@val is variable
 */
void times_table(void)
{
	int i, j, val;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			val = i * j;
			if (val >= 10)
			{
				_putchar(val / 10 + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar(val % 10 + '0');
		}
		_putchar('\n');
	}
}
