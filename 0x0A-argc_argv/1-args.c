#include <stdlib.h>
#include <stdio.h>

/**
 * main - print the name
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	/*Ignore argv*/
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
