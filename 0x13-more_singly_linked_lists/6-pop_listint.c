#include "lists.h"

/**
* pop_listint - deletes beginning of a list
* @head: beginning of list
* Return: void
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i = 0;

	if (*head == NULL)
	{
		return (0);
		free(*head);
	}
	else
	{
		temp = *head;
		i = temp->n;
		*head = temp->next;
		free(temp);
	}
	return (i);
}
