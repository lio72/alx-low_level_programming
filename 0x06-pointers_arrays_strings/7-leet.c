#include "main.h"

/**
 * leet - function that change code string;
 *
 * @str: is the parmeter1.
 *
 * Return: dest .
 */

char *leet(char *str)
i
{
	int j = 0;

	while (str[j] != '\0')
	{
		if (str[j] == 'a' || str[j] == 'A')
		{
			str[j] = '4';
		}
		else if (str[j] == 'e' || str[j] == 'E')
		{
			str[j] = '3';
		}
		else if (str[j] == 'o' || str[j] == 'O')
		{
			str[j] = '0';
		}
		else if (str[j] == 't' || str[j] == 'T')
		{
			str[j] = '7';
		}
		else if (str[j] == 'l' || str[j] == 'L')
		{
			str[j] = '1';
		}

		j++;
	}

	return (str);

}
