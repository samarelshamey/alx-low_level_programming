#include "main.h"

/**
 * _strlen - measure length of string
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
 * append_text_to_file - appends text at the end of file
 *
 * @filename: name of file
 *
 * @text_content: content to be appended
 *
 * Return: integer
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t bytes = 0;
	ssize_t len = _strlen(text_content);

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (len)
		bytes = write(file, text_content, len);
	close(file);
	return (bytes == len ? 1 : -1);
}
