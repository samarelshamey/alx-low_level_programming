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
	ssize_t bytesread, byteswritten;

	if (!filename || !letters)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	ch = (char *)malloc(letters + 1);
	if (ch == NULL)
	{
		close(file);
		free(ch);
		return (0);
	}
	bytesread = read(file, ch, letters);
	if (bytesread > 0)
	{
		ch[bytesread] = '\0';
		byteswritten = write(STDOUT_FILENO, ch, bytesread);
		if (bytesread != byteswritten)
		{
			close(file);
			free(ch);
			return (0);
		}
	}
	close(file);
	free(ch);
	if (bytesread < (ssize_t) letters)
		return (bytesread);
	else
		return (0);
}
