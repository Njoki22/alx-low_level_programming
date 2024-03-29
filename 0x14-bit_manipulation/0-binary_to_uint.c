#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: number to be converted
 *
 * Return: result upon conversion
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int d = 0;
	int len = strlen(b);

	if (b == NULL)
	{
		return (0);
	}
	for (d = 0; d < len; d++)
	{
		if (b[d] == '0' || b[d] == '1')
			result = (result << 1) | (b[d] - '0');
		else
			return (0);
	}
	return (result);
}
