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
	
	long int n;
	srand(time(0));
	n = rand() - RAND_MAX/2;
	if (n<0)
	{
		printf("%ld is negative\n", n);
	}
	else if(n>0)
	{
		printf("%ld is positive\n", n);
	}
	else
	{
		printf("%ld is zero\n", n);
	}



	return (0);
}
