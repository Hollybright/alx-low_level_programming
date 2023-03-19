#include <stdio.h>

/**
 * main - main function
 *
 * Return: success on 0
 */
int main(void)
{
	printf("size of a char: %lu byte(s)", sizeof(char));
	printf("size of an int: %lu byte(s)", sizeof(int));
	printf("size of a long int: %lu byte(s)", sizeof(long int));
	printf("size of a long long int: %lu byte(s)", sizeof(long long int));
	printf("size of a float: %lu byte(s)", sizeof(float));
	printf('\n');
	return (0);
}
