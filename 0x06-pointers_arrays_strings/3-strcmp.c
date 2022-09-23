#include "main.h"

/**
 * _strcmp - function that compare two string and return value @val.
 *
 * @s1: is the parmeter1.
 * @s2: is the parameter2.
 *
 * Return: val.
 */

int _strcmp(char *s1, char *s2)

{
	int val, i;

	while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0'))
	{
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
	{
		val = 0;
		break;
	}
	else if (s1[i] > s2[i] || s1[i] < s2[i])
	{
		val = s1[i] - s2[i];
		break;
	}
	else if (s1[i] == '\0')
	{
		val = s2[i];
		break;
	}
	else if (s2[i] == '\0')
	{
		val = s1[i];
		break;
	}
	else
	{

	}

	return (val);
}
