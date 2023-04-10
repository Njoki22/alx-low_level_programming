#include "main.h"

/**
 * get_bit - returns value of bit at given index
 * @n: number to extract bit
 * @index: the index of bit extracted
 * Return: value of bit at index or -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}
