#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file to append to.
 * @text_content: The text to append to the file.
 * Return: 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int g;
	int len, bytes;

	if (filename == NULL)
		return (-1);
	g = open(filename, O_WRONLY | O_APPEND);
	if (g == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);
		bytes = write(g, text_content, len);

		if (bytes != len)
		{
			close(g);
			return (-1);
		}
	}
	close(g);
	return (1);
}
