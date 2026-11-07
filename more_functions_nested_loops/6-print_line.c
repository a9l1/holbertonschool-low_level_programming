#include "main.h"

/**
 * print_line - Draws a straight line using underscores
 * @n: Number of underscores to print
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
