#include "lists.h"

/**
 * listint_len - returns number of elements
 * @h: linked list
 *
 * Return: number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}
	return (number);

}
