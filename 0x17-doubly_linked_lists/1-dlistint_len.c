#include "lists.h"

/**
 * dlistint_len - is the function to print elemen of dlist
 * @h: is our dlist
 *
 * Return: len of dlistint
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
