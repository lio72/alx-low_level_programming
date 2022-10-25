#include "lists.h"

/**
 * listint_len - print list of our fuction
 *
 * @h: is our list
 * Return: number
 *
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		h = h->next;
		number += 1;
	}
	return (number);
}
