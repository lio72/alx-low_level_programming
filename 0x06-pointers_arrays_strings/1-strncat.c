<<<<<<< HEAD
#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 *
 * @dest : is the parmeter1.
 * @src : is the parameter2.
 * @n : is the number of char to concanter.
 *
 *return dest .
 */

char *_strncat(char *dest, char *src, int n)

{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (source[j] != '\0' &&  j <= n)
	{
		dest[i] = source[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);

}
=======
#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 *
 * @dest : is the parmeter1.
 * @src : is the parameter2.
 * @n : is the number of char to concanter.
 *
 *return dest .
 */

char *_strncat(char *dest, char *src, int n)

{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (source[j] != '\0' &&  j <= n)
	{
		dest[i] = source[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);

}
>>>>>>> 8dbe71c184b46b15a02b612a566f1a1f3a597046
