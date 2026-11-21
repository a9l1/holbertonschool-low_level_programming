#include "main.h"
#include <stdlib.h>

/**
 * error_exit - Prints an error and exits with status 98
 */
void error_exit(void)
{
	char *message = "Error\n";
	int i;

	for (i = 0; message[i] != '\0'; i++)
		_putchar(message[i]);
	exit(98);
}

/**
 * number_length - Validates a decimal number and finds its length
 * @s: Number to validate
 *
 * Return: Number of digits
 */
size_t number_length(char *s)
{
	size_t i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			error_exit();
	}
	if (i == 0)
		error_exit();
	return (i);
}

/**
 * multiply - Multiplies two decimal strings
 * @a: First number
 * @b: Second number
 * @la: Length of first number
 * @lb: Length of second number
 *
 * Return: Array of product digits
 */
int *multiply(char *a, char *b, size_t la, size_t lb)
{
	int *digits;
	int carry, value;
	size_t i, j, size = la + lb;

	if (la > ((size_t)-1) / sizeof(int) - lb)
		error_exit();
	digits = malloc(size * sizeof(int));
	if (digits == NULL)
		error_exit();
	for (i = 0; i < size; i++)
		digits[i] = 0;
	for (i = la; i > 0; i--)
	{
		carry = 0;
		for (j = lb; j > 0; j--)
		{
			value = digits[i + j - 1] +
				(a[i - 1] - '0') * (b[j - 1] - '0') + carry;
			digits[i + j - 1] = value % 10;
			carry = value / 10;
		}
		digits[i - 1] = carry;
	}
	return (digits);
}

/**
 * print_product - Prints product without leading zeros
 * @digits: Product digits
 * @size: Number of digits
 */
void print_product(int *digits, size_t size)
{
	size_t i = 0;

	while (i < size - 1 && digits[i] == 0)
		i++;
	while (i < size)
		_putchar(digits[i++] + '0');
	_putchar('\n');
}

/**
 * main - Multiplies two positive decimal numbers
 * @argc: Argument count
 * @argv: Argument strings
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	size_t la, lb;
	int *digits;

	if (argc != 3)
		error_exit();
	la = number_length(argv[1]);
	lb = number_length(argv[2]);
	digits = multiply(argv[1], argv[2], la, lb);
	print_product(digits, la + lb);
	free(digits);
	return (0);
}
