#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a
 * call to ``` malloc : malloc(old_size)```.
 * @old_size: size in bytes allocated for ptr
 * @new_size: size in bytes of new memory block
 *
 * Return: pointer to new memory block, NULLor ptr.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			return (NULL);
		}
	}
	else
	{
		if (new_size <= old_size)
		{
			return (ptr);
		}
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			return (NULL);
		}

		memcpy(new_ptr, ptr, old_size);
		free(ptr);
	}
	return (new_ptr);
}

