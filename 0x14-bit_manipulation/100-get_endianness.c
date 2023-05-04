#include "main.h"

/**
 * get_endianness - function tha checks endianness
 * Return: 0 if big endian or 1 if little endian
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *z = (char *)&a;

	if (*z == 1)
	{
		return (1);
	}
	else if (*z == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
