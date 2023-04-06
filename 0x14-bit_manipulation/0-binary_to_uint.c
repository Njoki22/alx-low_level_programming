#include "main.h"
#include<stdlib.h>
#include <string.h>

/**
 * binary_to_int - converts binary number to unsigned integer
 * @b: type character
 * Return: The converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int result = 0;
	int len = strlen(b);

	if (b == NULL)
		return (0);

	for (x = 0; x < len; x++)
	{
		if (b[x] == '0' || b[x] == '1')
			result = (result << 1) | (b[x] - '0');
		else
			return (0);
	}

	return (result);
}
