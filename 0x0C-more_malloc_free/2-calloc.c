#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory of an array using malloc
 * @nmemb: number of elements in array
 * @size: size of elements of array
 *
 * Return: NULL is size or nmemb == 0
 * NULL if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb *size);
	if (p == NULL)
	{
		return (NULL);
	}

	memset(p, 0, nmemb * size);

	return (p);
}
