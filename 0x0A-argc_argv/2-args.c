#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all argument
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int b;
	printf("argc = %d\n", argc);
	
	for (b < argc; b++)
	{
		/*Ignore argv*/
		printf("%i\n");
	}
	return (0);
}
