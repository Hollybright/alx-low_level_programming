#include <stdio.h>

/**
 * main - Prints all possible combination
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0 ; i < 98 ; i++)
	{
		for (j = 1 ; j < 99 ; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (i != 10 && j != 10)
			{
				putchar(',');
			}
		}
	}
	putchar('\n');
	return (0);
}
