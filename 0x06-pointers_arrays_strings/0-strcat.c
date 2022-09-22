#include "main.h"

/**
 * _strcat - this is a funcion strcat
 * @dest: first param
 * @src: second param
 * Return: a pointer to the destination string dest
 */
char *_strcat(char *dest, char *src)
{
char *dest_end = dest;
int src_len = 0;

while (*dest_end)
++dest_end;

<<<<<<< HEAD
	while (dest[i] != '\0')
	{
		i++;
	}
	for (k = 0; src[k] != '\0'; k++)
	{
		i = i + 1;
		dest[i] = src[k];
	}
	dest[i] = '\0';
=======
while (src[src_len])
++src_len;
>>>>>>> 9454a7019ebfbff2da4bddff7ab94dc1c0538ad9

if (src + src_len < dest || dest_end + src_len < src)
{
do {
*dest_end++ = 
*src++;
} while (src_len--);

}
return (dest);

}
