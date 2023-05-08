#include "main.h"

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
if (argc != 3)
{
print_usage_and_exit();
}

copy_file(argv[1], argv[2]);

return (0);
}

/**
 * print_usage_and_exit - prints a usage message to the standard error
 * Return: void
 */
void print_usage_and_exit(void)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

/**
 * print_error_and_exit - prints an error message to the standard error
 * followed by a new line character, and then exits the program
 * @error_message: a string that contains the error message to be printed.
 * @file_name: a string that contains the
 * name of the file that caused the error.
 * @exit_code: an integer value that specifies the
 * exit code to be used when the program exits.
 */
void print_error_and_exit(char *error_message, char *file_name, int exit_code)
{
dprintf(STDERR_FILENO, error_message, file_name);
dprintf(STDERR_FILENO, "\n");
exit(exit_code);
}

/**
 * copy_file - Copies the content of a file to another file
 * @from_file_name: name of the file to be copied from
 * @to_file_name: name of the file to be copied to
 */
void copy_file(char *from_file_name, char *to_file_name)
{
int from_fd, to_fd, read_size;
char buffer[BUFFER_SIZE];
from_fd = open(from_file_name, O_RDONLY);
if (from_fd == -1)
{
print_error_and_exit("Error: Can't read from file %s", from_file_name, 98);
}

to_fd = open(to_file_name, O_CREAT | O_WRONLY | O_TRUNC,
		S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
if (to_fd == -1)
{
print_error_and_exit("Error: Can't write to %s", to_file_name, 99);
}

while ((read_size = read(from_fd, buffer, BUFFER_SIZE)) > 0)
{
if (write(to_fd, buffer, read_size) != read_size)
{
print_error_and_exit("Error: Can't write to %s", to_file_name, 99);
}
}

if (read_size == -1)
{
print_error_and_exit("Error: Can't read from file %s", from_file_name, 98);
}

if (close(from_fd) == -1)
{
print_error_and_exit("Error: Can't close file %s", from_file_name, 100);
}

if (close(to_fd) == -1)
{
char to_fd_str[20];
sprintf(to_fd_str, "%d", to_fd);
print_error_and_exit("Error: Can't close fd %s", to_fd_str, 100);
}
}

