#include "function_pointers.h"
#include<stdlib.h>

/**
 * print_name - prints a name
 * @name: name of person
 * @f: pointer to function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		(*f)(name);
}
