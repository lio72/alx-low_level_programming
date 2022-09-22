#include "main.h"
#include <string.h>

/**
 * _strncat -  function that concatenates two strings.
 * @src: cadena a copiar
 * @dest: destino de la cadena.
 * @n: number.
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = strlen(dest);
	int a = 0;

	while (a < n && *src)
	{
		dest[i + a] = *src;
		src++;
		a++;
	}
	dest[i + a] = '\0';
	return (dest);
}
