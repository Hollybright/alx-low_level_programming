#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all argument
 * @argc: argument numbers
 * @argv: argument array
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int b;

	for (b = 0; b < argc; b++)
	{
		printf("%s\n", argv[b]);
	}
	return (0);
}
