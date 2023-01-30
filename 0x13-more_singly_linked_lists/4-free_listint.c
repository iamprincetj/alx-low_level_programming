#include "lists.h"

/**
 *free_listint - frees a list
 *
 *@head: pointer to the head node
 *
 *Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	/*iterate through each node in list*/
	while ((temp = head) != NULL)
	{
		/*set head as the next node*/
		head = head->next;
		free(temp);
	}
}
