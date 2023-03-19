#include <stdio.h>

/**
 * main - main function
 *
 * Return: success on 0
 */
int main(void)
{
	printf("size of a char: %lu byte(s)", sizeof(char)'\n');
	printf("size of an int: %lu byte(s)", sizeof(int)'\n');
	printf("size of a long int: %lu byte(s)", sizeof(long int)'\n');
	printf("size of a long long int: %lu byte(s)", sizeof(long long int)'\n');
	printf("size of a float: %lu byte(s)", sizeof(float)'\n');
	return (0);
}
