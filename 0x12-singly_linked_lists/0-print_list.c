#include "lists.h"
#include<stdio.h>

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int count;
	count = 0;

	while (h != NULL)
	{
		if (h ->str != NULL)
		{
			printf("[%u} %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		count++;
		h = h->next;
	}

	return (count);
}
