#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: The array to be reversed.
 * @n: number of elements of the array.
 *
 * Return: The reversed array.
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		n--;

		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
