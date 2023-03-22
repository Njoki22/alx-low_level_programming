#include "function_pointers.h"
#include<stdlib.h>

/**
 * int_index - search for an integer
 * @array: array used
 * @size: size of the array
 * @cmp: pointer to function used
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	
	if (size <= 0)
	{
		return (-1);
	}
	if (array == NULL || cmp == NULL)
	{
		return (-1);
	::}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
