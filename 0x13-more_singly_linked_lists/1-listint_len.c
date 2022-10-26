#include "lists.h"

/**
* listint_len -  returns the number of elements in a linked list
* @k: head of the list
* Return: number of nodes
*/
size_t listint_len(const listint_t *k)
{
	size_t n = 0;

	while (k != NULL)
	{
		k = k->next;
		n++;
	}
	return (n);
}
