#include "lists.h"

/**
 *listint_len -  returns the number of elements in a linked link
 *
 *@h: pointer to the head node
 *
 *Return: The number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
