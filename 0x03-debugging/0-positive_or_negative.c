#include <time.h>

/**
 * main- Entry point
 *
 * Return: always 0 (sucess)
*/

void positive_or_negative(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	
}
