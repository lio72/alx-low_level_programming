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
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else if (last_digit != 0 and last_digit < 6)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
	}
	else
	{
		printf("last digit of %d is %d and is 0\n", n, last_digit);
	}
	return (0);
}
