#include "main.h"
#include <string.h>

/**
 * _strncat - function that concatenates two strings.
 * @dest: The string to concatenate.
 * @src: the string
 * @n: input of max bytes to be used
 *
 * Return:  pointer to the resulting string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] = n; j++)
	{
		if (dest[i] == src[j])
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
