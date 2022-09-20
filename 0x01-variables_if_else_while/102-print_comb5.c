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
	int k;

	for (i = 48 ; i < 56 ; i++)
	{
		for (j = (i + 1) ; j < 57 ; j++)
		{
			for (k = (j + 1) ; k <= 57 ; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i < 55)
				{
					putchar(44);
					putchar(32);
				}
				else
				{
				}
			}
		}
	}
	putchar(*"\n");
	return (0);
}
