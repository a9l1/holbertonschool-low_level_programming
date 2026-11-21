#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts words in a string
 * @str: String to check
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
 * free_words - Frees previously allocated words
 * @words: Array of words
 * @count: Number of allocated words
 */
void free_words(char **words, int count)
{
	while (count > 0)
		free(words[--count]);
	free(words);
}

/**
 * copy_word - Allocates and copies one word
 * @str: Start of the word
 * @len: Length of the word
 *
 * Return: Pointer to word, or NULL
 */
char *copy_word(char *str, int len)
{
	char *word;
	int i;

	word = malloc(len + 1);
	if (word == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		word[i] = str[i];

	word[len] = '\0';
	return (word);
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
	int i = 0, k = 0, len, count;

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
		words[k] = copy_word(str + i, len);
		if (words[k] == NULL)
		{
			free_words(words, k);
			return (NULL);
		}
		k++;
		i += len;
	}
	words[k] = NULL;
	return (words);
}
