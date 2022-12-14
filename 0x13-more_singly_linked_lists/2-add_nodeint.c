#include "lists.h"

/**
* add_nodeint - adds node to the beginning of a list
* @head: beginning of the list
* @n: data value of the node
* Return: address to the list
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
		*head = newnode;
	else
	{
		newnode->next = *head;
		*head = newnode;
	}
	return (*head);
	free(newnode);
}
