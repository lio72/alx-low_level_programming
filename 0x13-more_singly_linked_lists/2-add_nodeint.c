#include "lists.h"

/**
 * listint_t - print list of our fuction
 *
 * @head: is node to add to our list
 * @n: is value of our node
 * Return: listint_t
 *
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	
	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		listint_t  *node = NULL;
		node = (listint_t*)malloc(sizeof(listint_t));
	
		node->n = n;
		node->next = *head;
		*head = node;
		return (head);
	}
}
