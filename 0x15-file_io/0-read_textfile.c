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
	FILE *file;
	char ch[letters + 1];
	size_t bytesread, byteswritten;

	if (filename == NULL)
		return (0);
	file = fopen(filename, "r");
	if (file == NULL)
		return (0);
	bytesread = fread(ch, sizeof(char), letters, file);
	if (bytesread > 0)
	{
		ch[bytesread] = '\0';
		byteswritten = printf("%s", ch);
		if (bytesread != byteswritten)
		{
			fclose(file);
			return (0);
		}
	}
	fclose(file);
	if (bytesread < letters)
		return (bytesread);
	else
		return (0);
}
