#include <stdio.h>

/**
 * main - is the principal programme to printf.
 * @argc: is argument1.
 * @argv: is argument2.
 *
 * Return: 0.
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);

}
