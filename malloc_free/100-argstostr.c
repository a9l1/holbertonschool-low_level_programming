#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments into one string
 * @ac: Number of arguments
 * @av: Array of argument strings
 *
 * Return: Pointer to new string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j;
	unsigned int len = 0, k = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			str[k++] = av[i][j];

		str[k++] = '\n';
	}

	str[k] = '\0';

	return (str);
}
