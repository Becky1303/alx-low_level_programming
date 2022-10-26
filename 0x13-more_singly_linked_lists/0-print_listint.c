#include "lists.h"

/**
* print_listint - prints all the elements of a listint_t list
* @k: head of list
* Return: size of list
*/
size_t print_listint(const listint_t *k)
{
	size_t n = 0;

	while (k != NULL)
	{
		printf("%d\n", k->n);
		k = k->next;
		n++;
	}
	return (n);
}
