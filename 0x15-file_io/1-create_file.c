#include "main.h"

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
	ssize_t len = strlen(text_content);

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
