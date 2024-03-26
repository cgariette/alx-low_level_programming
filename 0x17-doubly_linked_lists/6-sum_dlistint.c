#include "lists.h"

/**
 * sum_dlistint - returns sum of all elements
 * @head: head node
 *
 * Return: sum of all elements, 0 if nothing
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head-> prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
