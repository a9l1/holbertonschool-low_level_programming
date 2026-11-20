#include <stdio.h>

/**
 * main - Displays a simple calculator menu
 *
 * Return: Always 0
 */
int main(void)
{
	int choice = -1;

	printf("Simple Calculator\n");

	do {
		printf("1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n");
		printf("Choice: ");

		if (scanf("%d", &choice) != 1)
			return (1);

		if (choice == 0)
			printf("Bye!\n");
		else
			printf("Please choose 0 to quit.\n");

	} while (choice != 0);

	return (0);
}
