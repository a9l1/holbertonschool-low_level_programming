#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts words separated by spaces
 * @str: String to count
 *
 * Return: Number of words
 */
int count_words(char *str)
{
	int i, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			count++;
	}

	return (count);
}

/**
 * strtow - Splits a string into words
 * @str: String to split
 *
 * Return: Array of words, or NULL on failure
 */
char **strtow(char *str)
{
	char **words;
	int i = 0, j, k = 0, len, count;

	if (str == NULL || *str == '\0')
		return (NULL);

	count = count_words(str);
	if (count == 0)
		return (NULL);

	words = malloc((count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;

		if (str[i] == '\0')
			break;

		len = 0;
		while (str[i + len] != '\0' && str[i + len] != ' ')
			len++;

		words[k] = malloc((len + 1) * sizeof(char));
		if (words[k] == NULL)
		{
			while (k > 0)
				free(words[--k]);
			free(words);
			return (NULL);
		}

		for (j = 0; j < len; j++)
			words[k][j] = str[i + j];

		words[k][len] = '\0';
		k++;
		i += len;
	}

	words[k] = NULL;
	return (words);
}
