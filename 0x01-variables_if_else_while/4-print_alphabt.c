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
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		{
			printf("%c", c);
		}
	}
	printf("\n");
	return (0);
}
