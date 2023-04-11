#include "main.h"
#include<string.h>

/**
 * create_file - function that creates a file
 * @filename: name of file created
 * @text_content: text to write on file
 *
 * Return: 1 on success and -1 upon failure
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int byt;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (file == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		byt = write(file, text_content, strlen(text_content));

		if (byt == -1)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (-1);
}