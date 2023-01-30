#include "lists.h"

/**
 *print_listint - prints all the element of a list
 *
 *@h: pointer to the head node
 *
 *Return: number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	printf("\n");

	return (count);
}
