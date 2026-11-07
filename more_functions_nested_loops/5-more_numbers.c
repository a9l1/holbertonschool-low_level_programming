#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14 ten times
 */
void more_numbers(void)
{
	int row;
	int num;

	for (row = 0; row < 10; row++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
				_putchar('0' + num / 10);

			_putchar('0' + num % 10);
		}
		_putchar('\n');
	}
}
