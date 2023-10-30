#include "main.h"

/**
 * _strlen - return length
 *
 * @s: string
 *
 * Return: intger
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
 * append_text_to_file - appends text to file
 *
 * @filename: name of file
 *
 * @text_content: text
 *
 * Return: integer
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t byte = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (len)
		byte = write(file, text_content, len);
	close(file);
	return (byte == len ? 1 : -1);
}
