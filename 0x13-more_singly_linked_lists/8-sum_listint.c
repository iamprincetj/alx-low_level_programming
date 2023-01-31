#include "lists.h"

/**
 *sum_listint - returns the sum of all the data (n) of a
 *		linked list
 *
 *@head: pointer to the head node
 *
 *Return: sum of all the data (n) of a node
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
