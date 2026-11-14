#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: String to capitalize
 *
 * Return: Pointer to str
 */
char *cap_string(char *str)
{
	int i;
	int new_word;

	new_word = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z' && new_word)
			str[i] = str[i] - ('a' - 'A');

		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		    str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		    str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		    str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		    str[i] == '}')
			new_word = 1;
		else
			new_word = 0;
	}

	return (str);
}
