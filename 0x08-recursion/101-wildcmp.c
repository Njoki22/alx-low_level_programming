#include "main.h"

/**
 * wildcmp - function that compares two strings.
 * @s1: string one
 * @s2: string two
 * Return: 1 if strings are identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '*')
	{
		while (*s1 != '\0')
		{
			if (wildcmp(s1, s2 + 1))
			{
				return (1);
			}
			s1++;
		}
		return (0);
	}
	if (*s1 != '\0' && (*s1 == *s2))
	{
		return (s1 + 1; s2 + 1);
	}
	return (0);
}
