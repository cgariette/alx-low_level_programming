#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;

	while (h != NULL)
	{
		*tmp = **h;
		*h = h->next;
		free(tmp);
	}
}
