#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "ERROR"
/**
 * is_digit - checks string
 * @s: string to evaluate
 *
 * Return: 0 if non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int g = 0;

	while (s[g])
	{
		if (s[g] < '0' || s[g] > '9')
			return (0);
		g++;
	}
	return (1);
}
/**
 * _strlen - returns the length of string
 * @s: string to evaluate
 *
 * Return: the length of string
 */
int _strlen(char *s)
{
	int h = 0;

	while (s[h] != '\0')
	{
		h++;
	}
	return (h);
}
/**
 * erros - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - two positives numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, h, carry, digit1, digit2, *result, b = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (h = 0; h <= len1 + len2; h++)
		result[h] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (h = 0; h < len - 1; h++)
	{
		if (result[h])
			b = 1;
		if (b)
			putchar(result[h] + '0');
	}
	if (!b)
		putchar('0');
	putchar('n');
	free(result);
	return (0);
}
