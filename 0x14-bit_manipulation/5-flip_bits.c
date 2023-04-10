#include "main.h"

/**
 * flip_bits -  function that returns the number of
 * bits you would need to flip to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor_results = n ^ m;

	while (xor_results > 0)
	{
		count += xor_results & 1;
		xor_results >>= 1;
	}

	return (count);
}
