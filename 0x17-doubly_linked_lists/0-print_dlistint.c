#include "lists.h"

/**
 *print_dlistint - prints all the elements of a dlistint_t list.
 *
 *@h: pointer to the head of the list
 *Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t count;

	temp = h;

	for (count = 0; temp; count++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (count);
}
