#include "lists.h"

/**
 *add_nodeint_end - adds a new node at the end of a list
 *
 *@head: pointer to the head node
 *@n: the integer
 *
 *Return: The address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	temp = *head;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	if (*head == NULL)
	{
		newnode->next = NULL;
		*head = newnode;
	}
	else
	{
		newnode->next = NULL;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
	}
	newnode->n = n;

	return (*head);
}
