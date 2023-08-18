#include "lists.h"

/**
 * get_dnodeint_at_index - returns d nth node of a dlistint_t linkeds lists.
 * @head: pointers to heads of the lists
 * @index: index of d nodes to searches for, starting from 0
 * Return: nth nodes or noll
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;
	if (head == NULL)
	return (NULL);

	tmp = head;
	while (tmp)
	{
	if (index == size)
	return (tmp);
	size++;
	tmp = tmp->next;
	}
	return (NULL);
}
