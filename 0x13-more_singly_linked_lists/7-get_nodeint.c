#include "lists.h"

/**
 *get_nodeint_at_index - returns the nth node of a linked list
 *
 *@head: pointer to the head node
 *@index: the index of the node, starting at zero
 *
 *Return: the nth node, else NULL if node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	i = 0;
	temp = head;

	if (head == NULL)
		return (NULL);


	while (i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp);
}
