#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to memory area
 * @b: Byte to fill memory with
 * @n: Number of bytes to fill
 *
 * Return: Pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
