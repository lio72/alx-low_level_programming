#include "main.h"

/**
 * cap_string - function that write string on toupper;
 *
 * @str: is the parmeter1.
 *
 * Return: str.
 */

char *cap_string(char *str)

{
	int j = 0;

	while (str[j] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[j] = str[j] - 32;
		}
		if (str[j] == ' ' || str[j] == '\t' ||
str[j] == '\n' || str[j] == ',' || str[j] == ';' ||
str[j] == '.' || str[j] == '!' || str[j] == '?' ||
str[j] == '"' || str[j] == '(' || str[j] == ')' ||
str[j] == '{' || str[j] == '}')
		{
			if (str[j + 1] >= 'a' && str[j + 1] <= 'z')
			{
				str[j + 1] = str[j + 1] - 32;
			}
		}
		j++;
	}

	return (str);

}
