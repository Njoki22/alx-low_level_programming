#include "lists.h"

/**
 * free_listint2 - function that frees a list
 * @head: pointer to the beginning of a list
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
	{
		return;
	}
	while (current != NULL)
	{
		current = (*head)->next;

		free(current);
		*head = current;
	}
}
