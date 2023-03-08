#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - function
 * @s: input
 * Return: 0(Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		putchar('\n');
}
