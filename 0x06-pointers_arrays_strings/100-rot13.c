#include "main.h"

/**
 * rot13 - function that change code string.
 *
 * @str: is the parmeter1.
 *
 * Return: str.
 */

char *rot13(char *str)

{
	int j, val;
	char s = 'CR';

	for (j = 0; str[j] != '\0'; j++)
	{
		str[j] = str[j] + s;
		if ((str[j] >= 'A' && str[j] <= 'Z') || (str[j] >= 'a' && str[j] <= 'z'))
		{

		}
		else
		{
			str[j] = str[j] - s - s;
		}
	}

	return (str);

}
