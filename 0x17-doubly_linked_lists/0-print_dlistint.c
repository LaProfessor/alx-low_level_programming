#include "lists.h"

/**
 * print_dlistints - prints all d elements of a
 * dlistint_t lists
 *
 * @h: heads of the lists
 * Return: d numbers of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}