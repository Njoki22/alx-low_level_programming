#include "main.h"
#include<string.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: text to append
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	int len, byt;

	if (filename == NULL)
	{
		return (-1);
	}
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		len = strlen(text_content);
		byt = write(f, text_content, len);

		if (byt != len)
		{
			close(f);
			return (-1);
		}
	}

	close(f);
	return (1);
}
