#include "lists.h"

/**
 *print_listint - print list of our fuction
 *
 * @h: is our list
 * Return: number
 *
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		number += 1;
	}
	return (number);
}
