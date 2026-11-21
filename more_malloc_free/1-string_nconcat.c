#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using n bytes of s2
 * @s1: First string
 * @s2: Second string
 * @n: Maximum number of bytes to copy from s2
 *
 * Return: Pointer to new string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1 = 0, len2 = 0;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (n < len2)
		len2 = n;

	result = malloc((size_t)len1 + len2 + 1);
	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	for (j = 0; j < len2; j++)
		result[i + j] = s2[j];

	result[i + j] = '\0';

	return (result);
}
