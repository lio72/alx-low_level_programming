#include "main.h"
#include <ctype.h>

/**
 * jack_bauer - print last digit on one number
 *
 * Return: always valus (sucess)
 *
 */

void jack_bauer(void)

{
	int h = 0;
	int min = 0;
	int h_tmp;
	int min_tmp;

	while (h <= 23)
	{
		while (min <= 59)
		{
			h_tmp = h % 10;
			min_tmp = min % 10;
			_putchar(h / 10 + '0');
			_putchar(h_tmp + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min_tmp + '0');
			min++;
			_putchar('\n');
		}
		h++;
		min = 0;
	}
}
