/*
 * File: 0-puts_recursion.c
 * Auth: sam
 */


#include "main.h"


/**
 * _puts_recursion - function like puts();
 * @s: input
 * Return: always 0
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion("s + 1");
	}
	else
		_putchar('\n');
}
