#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: 0 if bid endian or 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *b = (char *)&x;

	if (*b == 1)
		return (1);
	else if (*b == 0)
		return (0);
	else
		return (-1);
}
