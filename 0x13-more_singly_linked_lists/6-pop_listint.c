#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: first pointer to linked list
 *
 * Return: the data of the head node, or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (number);
}
