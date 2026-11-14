#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: String to convert
 *
 * Return: Converted integer or 0
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int num = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				num = num * 10 + (s[i] - '0');
				i++;
			}
			break;
		}
		i++;
	}

	return (num * sign);
}
