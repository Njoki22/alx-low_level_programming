#include "lists.h"

/**
 * sum_listint - sums all the data of a linked list
 * @head: pointer to the head of list
 * Return: sum of all data(n) of list or 0if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
