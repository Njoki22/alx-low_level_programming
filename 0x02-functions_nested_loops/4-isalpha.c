#include "main.h"

/**
 * _isalpha - prints lowercase and uppercase
 * @c: is c a character
 *
 * Return: 1
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
