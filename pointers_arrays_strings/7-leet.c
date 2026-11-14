#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: String to encode
 *
 * Return: Pointer to str
 */
char *leet(char *str)
{
	int i;
	int j;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
				str[i] = numbers[j];
		}
	}

	return (str);
}
