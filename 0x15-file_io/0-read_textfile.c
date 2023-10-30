#include "main.h"

#define BUF_SIZE 1024

/**
 * read_textfile - function read and print text file
 *
 * @filename: file name
 *
 * @letters: letters in the file
 *
 * Return: bytes
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char ch[BUF_SIZE * 8];
	size_t byte;

	if (!filename || !letters)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	byte = read(file, &ch[0], letters);
	byte = write(STDOUT_FILENO, &ch[0], byte);
	close(file);
	return (byte);
}
