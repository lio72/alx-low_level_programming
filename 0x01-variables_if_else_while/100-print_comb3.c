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
	int j;

	for (i = 48 ; i < 57 ; i++)
	{
		for (j = (i + 1) ; j <= 57 ; j++)
		{
			putchar(i);
			putchar(j);
			if (i < 56)
			{
				putchar(44);
				putchar(32);
			}
			else
			{
			}
		}
	}
	putchar(*"\n");
	return (0);
}
