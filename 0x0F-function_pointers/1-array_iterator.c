#include "function_pointers.h"
#include<stdlib.h>

/**
 * array_iterator - execute function on each element
 * of an array
 * @array: the array
 * @size: size of the array
 * @action: pointer to function needed
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < (int) size; i++)
	{
		action(array[i]);
	}
}
