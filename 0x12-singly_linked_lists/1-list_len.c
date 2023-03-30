#include "lists.h"

/**
 * list_len - Calculate number of elements
 * @h: pointer to a list
 * Return: integer
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
