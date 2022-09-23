#include "main.h"

/**
 * leet - function that change code string;
 *
 * @str: is the parmeter1.
 *
 * Return: dest .
 */

char *leet(char *str)

{
	int j, i;
	char code1[] = "aAeEoOtTlL";
	char code2[] = "4433007711";

	j = 0;

	while (str[j] != '\0')
	{
		i = 0;
		while (i < 10)
		{
			if (code1[i] == str[j])
			{
				str[j] = code2[i];
			}
			i++;
		}
		j++;
	}

	return (str);

}
