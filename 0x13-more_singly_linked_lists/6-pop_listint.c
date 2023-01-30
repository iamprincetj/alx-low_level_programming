#include "lists.h"

/**
 *pop_listint - deletes the head node of a list
 *
 *@head: pointer to the head node
 *
 *Return: the head node's data (n).
 */

int pop_listint(listint_t **head)
{
	int first_node;
	listint_t *temp, *next;

	/*if list is empty return 0*/
	if (*head == NULL)
		return (0);

	/*set head addr to temp*/
	temp = *head;
	/*get addr of next node*/
	next = temp->next;
	/*get element of first node*/
	first_node = temp->n;

	/*free first node*/
	free(temp);

	/*set head to second node*/
	*head = next;

	/*return element of first node*/
	return (first_node);
}
