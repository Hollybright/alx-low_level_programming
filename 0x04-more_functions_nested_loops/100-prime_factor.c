#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number
 * 612852475143
 * Return: always 0 (Success)
 */

int main(void)
{
	int i;

	long num = 612852475143;

	for (i = sqrt(num) ; i > 2 ; i++)
	{
		if (num % i == 0)
		{
			printf("%d\n", i);
			break;
		}
	}

	return (0);
}
