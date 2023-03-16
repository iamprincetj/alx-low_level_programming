#include "lists.h"

/**
 *add_dnodeint -  adds a new node at the beginning of a dlistint_t list.
 *
 *@head: pointer to the head of a list
 *@n: the element to be added
 *Return: the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->prev = NULL;
	new->next = *head;
	new->n = n;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
