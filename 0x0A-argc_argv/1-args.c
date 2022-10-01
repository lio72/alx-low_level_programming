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
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);

}
