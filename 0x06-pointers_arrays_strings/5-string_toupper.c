#include "main.h"

/**
 * string_toupper - function that write string on toupper;
 *
 * @str: is the parmeter1.
 *
 * Return: dest .
 */

char *string_toupper(char *str)

{
	int j = 0;

	while (str[j] != '\0')
	{
		if (str[j] >= 'a' && str[j] <= 'z')
		{
			str[j] = str[j] - 32;
		}
		j++;
	}

	return (str);

}
