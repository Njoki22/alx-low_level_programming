#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: the size of the memory to print
 * @b: the address of memory to print
 * @n: bytes of memeory allocated
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
