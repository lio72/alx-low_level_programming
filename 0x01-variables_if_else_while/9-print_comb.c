#include <stdio.h>
#include <stdlib.h>

/**
 * main- Entry point
 *
 * Return: always 0 (sucess)
*/

int main(void)
{
	int i;

	for (i = 48 ; i < 58 ; i++)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(44);
			putchar(32);
		}
		else
		{
		}
	}
	putchar(*"\n");
	return (0);
}
