#include "lists.h"

/**
* free_listint - frees a list
* @head: beginning of list
* Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	if (temp == NULL)
		free(head);
	else
	{
		while (head != NULL)
		{
			temp = head;
			head = head->next;
			free(temp);
		}
		free(head);
	}
}
