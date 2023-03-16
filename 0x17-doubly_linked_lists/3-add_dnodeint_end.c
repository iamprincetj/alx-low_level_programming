#include "lists.h"

/**
 *add_dnodeint_end -  adds a new node at the end of a dlistint_t list.
 *
 *@head: pointer to the head of the list
 *@n: the element to add to the list
 *Return: address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new;
	new->next = NULL;
	new->prev = temp;
	new->n = n;
	return (new);
}
