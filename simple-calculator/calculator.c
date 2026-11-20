#include <stdio.h>

/**
 * main - Runs a simple calculator
 *
 * Return: 0 on success, 1 on input failure
 */
int main(void)
{
	int choice;
	double a;
	double b;
	double result;

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
		else
		{
			printf("A: ");
			fflush(stdout);
			if (scanf("%lf", &a) != 1)
				return (1);

			printf("B: ");
			fflush(stdout);
			if (scanf("%lf", &b) != 1)
				return (1);

			if (choice == 4 && b == 0)
			{
				printf("Error: division by zero\n");
				continue;
			}

			if (choice == 1)
				result = a + b;
			else if (choice == 2)
				result = a - b;
			else if (choice == 3)
				result = a * b;
			else
				result = a / b;

			printf("Result: %g\n", result);
		}

	} while (choice != 0);

	return (0);
}
