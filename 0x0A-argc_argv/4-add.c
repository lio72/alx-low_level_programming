#include <stdio.h>
#include <ctype.h>
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
	int i, a, s = 0;

	if (argc == 1)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		if (isdigit(argv[i]))
		{
			a = atoi(argv[i]);
			s = s + a;
		}
		else
		{
			printf("Error\n");
			break;
		}
	}
	printf("%d\n", s);

	return (0);

}
