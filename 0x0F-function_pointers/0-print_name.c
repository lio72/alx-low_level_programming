#include "main.h"

/**
 * print_name - name is function to print name
 *
 * @name: is parameter 1
 * @f: is pointer on function
 *
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
	return (0);
}
