#include "lists.h"

/**
 * get_nodeint_at_index - function that returns nth node of a list
 * @head: beginning of node
 * @index: position of node to find
 * Return: current node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current = head;

	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}
	return (current);
}
