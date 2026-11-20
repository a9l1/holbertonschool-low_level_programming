#include <stdio.h>

/**
 * main - Displays a calculator menu and validates choices
 *
 * Return: 0 on success, 1 on input failure
 */
int main(void)
{
	int choice;

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
		else if (choice < 0 || choice > 4)
			printf("Invalid choice\n");

	} while (choice != 0);

	return (0);
}
