#include <stdio.h>

/**
 * main - Runs a simple calculator
 *
 * Return: 0 on success, 1 on input failure
 */
int main(void)
{
	int choice;
	int a;
	int b;

	printf("Simple Calculator\n");

	do {
		printf("1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n");
		printf("Choice: ");
		fflush(stdout);

		if (scanf("%d", &choice) != 1)
			return (1);

		if (choice == 0)
		{
			printf("Bye!\n");
		}
		else if (choice < 0 || choice > 4)
		{
			printf("Invalid choice\n");
		}
		else if (choice == 1)
		{
			printf("A: ");
			fflush(stdout);
			if (scanf("%d", &a) != 1)
				return (1);

			printf("B: ");
			fflush(stdout);
			if (scanf("%d", &b) != 1)
				return (1);

			printf("Result: %d\n", a + b);
		}

	} while (choice != 0);

	return (0);
}
