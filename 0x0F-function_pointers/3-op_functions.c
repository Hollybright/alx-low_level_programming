#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns sum of two digits
 * @a: The first digit
 * @b: The second digit
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the difference of two numbers
 * @a: The first digit
 * @b: The second digit
 *
 * Return: the difference of a and b
 */
{
	return (a - b);
}
/**
 * op_mul - Returns the product two number
 * @a: the first number
 * @b: the second number
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the division of two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remainder of the division of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: Remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
