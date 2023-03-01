#include "main.h"

/**
 * strcat - function that concatenates two strings.
 * @dest: A pointer to the string to be concatenated.
 * @src: String to copy
 *
 * Return: A pointer to the destinationstring @dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
