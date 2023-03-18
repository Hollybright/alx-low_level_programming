#include <stdio.h>

/**
 * main -prints all possible combinations
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = i + 1 ; j <= 10 ; j++)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i != 9 && j != 10)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
