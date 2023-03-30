#include "lists.h"
#include<stdio.h>
/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *current_node, *next_node;

	current_node = head;
	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node->str);
		free(current_node);
		current_node = next_node;
	}
}
