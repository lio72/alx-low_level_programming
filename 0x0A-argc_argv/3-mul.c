#include <stdio.h>
#include <stdlib.h>

/**
 * main - is the principal programme to printf.
 * @argc: is argument1.
 * @argv: is argument2.
 *
 * Return: 0.
 */

int main(int argc, char **argv)
{
	int a, b;

	if (argc <= 2)
	{
		printf("Error\n");
	}

	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	return (0);

}
