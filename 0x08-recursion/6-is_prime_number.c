#include "main.h"

/**
 * is_prime_number - function thatchecks for prime numbers
 * @n: input
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
nt is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number(n, n - 1));
}

/**
 * prime_number - help fuction function for is_prime_number.
 * @n: Original number to be tested.
 * @i: Original number to test with.
 *
 * Return: 1 if a Prime else 0
 */
int prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0)
		return (0);
	else if (n % i != 0)
		return (prime_number(n, i - 1));
	return (0);
}

