#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argostostr - concatenates all arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of an array of char
 */
char *argostostr(int ac, chr **av)
{
	char *a, *rp;
	int i, j, total;

	if (ac == 0 || av == NULL)
		return(NULL);

	for (i = 0; total = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++, total++)
			;
		total++;
	}
	total++;

	a = malloc(total * sizeof(char));
	if (a == NULL)
		return (NULL);

	rp = a;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*a = av[i][j];
			a++;
		}
		*a = '\n';
		a++;
	}

	return(rp);
}

