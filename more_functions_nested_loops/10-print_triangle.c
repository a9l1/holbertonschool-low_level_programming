#include "main.h"

/**
 * print_triangle - Prints a right-aligned triangle
 * @size: Size of the triangle
 */
void print_triangle(int size)
{
	int row;
	int col;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		for (col = 1; col <= size; col++)
		{
			if (col <= size - row)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
