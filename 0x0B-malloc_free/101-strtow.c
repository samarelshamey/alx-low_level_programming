#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * word_count - function to count words
 *
 * @str: string
 *
 * Return: intger
*/

int word_count(char *str)
{
	int count = 0;
	int is_word = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			if (!is_word)
			{
				count++;
				is_word = 1;
			}
		}
		else
		{
			is_word = 0;
		}
	}
	return (count);
}

/**
 * strtow - function
 *
 * @str: string
 *
 * Return: char
*/
char **strtow(char *str)
{
	int word_i = 0, word_len = 0, is_word = 0, i, j, num_words;
	char **words;

	if (str == NULL || strlen(str) == 0)
	{
		return (NULL);
	}
	num_words = word_count(str);
	words = malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			if (!is_word)
			{
				word_len = 1;
				is_word = 1;
			}
			else
			{
				word_len++;
			}
		}
		else
		{
			if (is_word)
			{
				words[word_i] = malloc((word_len + 1) * sizeof(char));
				if (words[word_i] == NULL)
				{
					for (j = 0; j < word_i; j++)
					{
						free(words[j]);
					}
					free(words);
					return (NULL);
				}
				strncpy(words[word_i], &str[i - word_len], word_len);
				words[word_i][word_len] = '\0';
				word_i++;
				is_word = 0;
			}
		}
	}
	if (is_word)
	{
		words[word_i] = malloc((word_len + 1) * sizeof(char));
		if (words[word_i] == NULL)
		{
			for (j = 0; j <= word_i; j++)
			{
				free(words[j]);
			}
			free(words);
			return (NULL);
		}
		strncpy(words[word_i], &str[strlen(str) - word_len], word_len);
		words[word_i][word_len] = '\0';
		word_i++;
	}
	words[word_i] = NULL;
	return (words);
}
