#include "main.h"

/**
 * read_textfile - function the reads a text file
 * and prints it to thePOSIX std output
 * @filename: name of file
 * @letters: letters to read and print
 * Return: no. of letters printed or 0 if failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	int file;
	int bytes_read;
	int bytes_written;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	b = (char *) malloc(sizeof(char) * (letters + 1));
	if (b == NULL)
	{
		close(file);
		return (0);
	}
	bytes_read = read(file, b, letters);
	if (bytes_read == -1)
	{
		close(file);
		free(b);
		return (0);
	}
	b[bytes_read] = '\0';
	bytes_written = write(STDOUT_FILENO, b, bytes_read);
	if (bytes_written != bytes_read)
	{
		close(file);
		free(b);
		return (0);
	}
	close(file);
	free(b);
	return (bytes_written);
}

