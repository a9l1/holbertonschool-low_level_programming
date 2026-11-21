#include "main.h"
#include <stdlib.h>
#include <stdint.h>

/**
 * array_range - Creates an array of integers
 * @min: Minimum value
 * @max: Maximum value
 *
 * Return: Pointer to array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int *array;
	int value;
	size_t count, i;

	if (min > max)
		return (NULL);

	count = (size_t)((unsigned int)max - (unsigned int)min) + 1;

	if (count > SIZE_MAX / sizeof(int))
		return (NULL);

	array = malloc(count * sizeof(int));
	if (array == NULL)
		return (NULL);

	value = min;
	for (i = 0; i < count; i++)
	{
		array[i] = value;
		if (value < max)
			value++;
	}

	return (array);
}
