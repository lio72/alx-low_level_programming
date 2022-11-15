#include "unistd.h"

/**
 * _putchar - print string
 * @c : the caracter to print
 *
 * Return: always 0 (sucess)
*/

int _putchar(char c)

{
	return (write(1, &c, 1));
}
