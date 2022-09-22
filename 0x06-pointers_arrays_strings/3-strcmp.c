#include "main.h"

/**
 * _strcmp - function that concatenates two strings and return @dest.
 *
 * @s1: is the parmeter1.
 * @s2: is the parameter2.
 *
 * Return: val.
 */

int _strcmp(char *s1, char *s2)

{
	int val, j, i;

	for (j = 0; s1[j] != '\0'; j++)
	for (i = 0; s2[i] != '\0'; i++)
	if (j > i)
	{
		val = 15
	}
	else if (j < i)
	{
		val = -15
	}
	else
	{
		val = 0
	}

	return (val);

}
