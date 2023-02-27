#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: input type integer 1
 * @b: input type integer 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int n;

	 n = *a;
	*a = *b;
	*b = n;
}
