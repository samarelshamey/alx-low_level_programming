#include "main.h"

/**
 * read_textfile - reads a textfile and prints it
 *
 * @filename: file name
 *
 * @letters: number of letters
 *
 * Return: integer
 *
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *ch;
	ssize_t bytes;

	if (!filename || !letters)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	ch = (char *)malloc(letters + 1);
	bytes = read(file, &ch[0], letters);
	bytes = write(STDOUT_FILENO, &ch[0], bytes);
	close(file);
	free(ch);
	return (bytes);
}
