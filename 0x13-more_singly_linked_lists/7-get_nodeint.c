#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the first node
 * @index: index of the node
 *
 * Return: nth node of a linked list or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count = 0;

	temp = head;

	if (!head)
		return (NULL);

	while (temp && count < index)
	{
		temp = temp->next;
		count++;
	}
	return (count ? temp : NULL);
}
