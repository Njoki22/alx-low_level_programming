#include "lists.h"

/**
 * free_listint2 - function that frees a list
 * @head: pointer to the beginning of a list
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;

	if (head == NULL || *head == NULL)
	{
		return;
	}
	while (current != NULL)
	{
		listint_t *next = current->next;

		free(current);
		current = next;
	}
	*head = NULL;
}
