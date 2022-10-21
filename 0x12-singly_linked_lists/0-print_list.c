#include "lists.h"
#include <stdio.h>


/**
 * print_list - is function that print element
 *
 * @h: is list that we list.
 * Return: list
 */


size_t print_list(const list_t *h)
{
	size_t len = 0;

	while (h)
	{

		if (h->str  != NULL)
		{
			printf("[%d] %s\n", t->len, t->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		len = len + 1;
		h = h->next;
	}
	return (len);
}
