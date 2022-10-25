#include "lists.h"

/**
 * add_nodeint - print list of our fuction
 *
 * @head: is node to add to our list
 * @n: is value of our node
 * Return: listint_t
 *
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t  *node;

	node = (listint_t *)malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}
	else
	{
		node->n = n;
		node->next = *head;
		*head = node;
		return (*head);
	}
}
