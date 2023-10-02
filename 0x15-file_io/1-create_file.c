#include "main.h"

/**
 * _strlen - length of string
 *
 * @s: string
 *
 * Return: integer
*/

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * create_file - creates file
 *
 * @filename: name of the file
 *
 * @text_content: content that will be written
 *
 * Return: integer
*/
int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t bytes = 0;
	ssize_t len = _strlen(text_content);

	if (!filename)
		return (-1);
	file = open(filename,  O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);
	if (len)
		bytes = write(file, text_content, len);
	close(file);
	return (bytes == len ? 1 : -1);
}
