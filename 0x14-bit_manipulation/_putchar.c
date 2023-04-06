#include<unistd.h>
include "main.h"

/**
 * _putchar - prints characterc to standard output
 * @c: character printde
 * Return: 1 on success
 * On error, -1 returned and errno set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
