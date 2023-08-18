#include "lists.h"

/**
 * sum_dlistint - returns d sum of all the data (n)
 * of a doubly linked lists
 *
 * @head: heads of d lists
 * Return: sums of d datas
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
