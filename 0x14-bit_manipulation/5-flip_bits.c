#include "main.h"

/**
 * flip_bits - function that returns the number
 * of bits you would need to flip to get from one number to another.
 * @n: first integer
 * @m: second integer
 * Return: no. of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips = 0;
	unsigned long int xor_result = n ^ m;

	while (xor_result > 0)
	{
		flips += xor_result & 1;
		xor_result >>= 1;
	}
	return (flips);
}
