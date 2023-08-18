#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t lists.
 * @head: pointers 2 head of the lists
 * Return: nothings
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
