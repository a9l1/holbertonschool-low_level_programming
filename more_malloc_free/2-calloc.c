#include "main.h"
#include <stdlib.h>
#include <stdint.h>

/**
 * _calloc - Allocates memory and initializes it to zero
 * @nmemb: Number of elements
 * @size: Size of each element in bytes
 *
 * Return: Pointer to allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned char *ptr;
	size_t total;
	size_t i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	if ((size_t)nmemb > SIZE_MAX / size)
		return (NULL);

	total = (size_t)nmemb * size;
	ptr = malloc(total);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < total; i++)
		ptr[i] = 0;

	return (ptr);
}
