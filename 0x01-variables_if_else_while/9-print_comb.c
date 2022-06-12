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

	for (i = 48 ; i < 57 ; i++)
	{
		putchar(i);
		putchar(44);
		putchar(32);

	}
	putchar(*"\n");
	return (0);
}
