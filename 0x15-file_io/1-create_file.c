#include "main.h"

/**
 * create_file - function that creates file
 * @filename: name of file
 * @text_content: text to write on file
 * Return: 1 0n success and -1 failure
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int bytes;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		bytes = write(file, text_content, strlen(text_content));

		if (bytes == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
