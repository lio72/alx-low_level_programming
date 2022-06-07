#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main- Entry point
 *
 * Return: always 0 (sucess)
*/
int main(void)
{
	int c;

	c = 0;

	for (c = 0; c <= 9; c++)
		printf("%d", c);
	printf("\n");
	return (0);
}
