#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list.
 * @head: the head
 * @n: the node to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *ptr = malloc(sizeof(listint_t));
listint_t *temp = *head;

if (!ptr)
return (NULL);

ptr->n = n;
ptr->next = NULL;

if (*head == NULL)
{
*head = ptr;
return (ptr);
}

while (temp->next)
temp = temp->next;

temp->next = ptr;

return (ptr);
}
