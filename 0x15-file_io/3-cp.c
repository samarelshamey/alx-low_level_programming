#include "main.h"
#define BUFF_SIZE 1024
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * print_error - print error message
 *
 * @message: message to be printed
 *
 * @file_name: name of file
 *
 * @exit_code: code if exit status
*/
void print_error(const char *message, const char *file_name, int exit_code)
{
	dprintf(STDERR_FILENO, message, file_name);
	exit(exit_code);
}

/**
 * main - entry point
 *
 * @argc: argument count
 *
 * @argv: arguments
 *
 * Return: integer
*/

int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t bytes_read, bytes_written;
	char ch[BUFF_SIZE];

	if (argc != 3)
		print_error("Usage: cp file_from file_to\n", "", 97);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		print_error("Error: Can't read from file %s\n", argv[1], 98);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (file_to == -1)
		print_error("Error: Can't write to %s\n", argv[2], 99);
	while ((bytes_read = read(file_from, ch, BUFF_SIZE)) > 0)
	{
		bytes_written = write(file_to, ch, bytes_read);
		if (bytes_written == -1)
			print_error("Error: Can't write to %s\n", argv[2], 99);
	}
	if (bytes_read == -1)
		print_error("Error: Can't read from file %s\n", argv[1], 98);
	if (close(file_from) == -1)
		print_error("Error: Can't close fd %d\n", argv[1], 100);
	if (close(file_to) == -1)
		print_error("Error: Can't close fd %d\n", argv[2], 100);
	return (0);
}
