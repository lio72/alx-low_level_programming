#include "lists.h"
#include <stdio.h>


/**
 * print_list - is function that print element
 *
 * @h: is list that we list.
 * Return: len
 */


size_t print_list(const list_t *h)
{
	unsigned int l = 0;

	while (h)
	{

		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", t->len, t->str);
		}
		l = l + 1;
		h = h->next;
	}
	return (l);
}
