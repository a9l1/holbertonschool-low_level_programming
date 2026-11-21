#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array filled with a character
 * @size: Number of elements in the array
 * @c: Character used to initialize the array
 *
 * Return: Pointer to array, or NULL on failure
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
