#include "main.h"
/**
 * _puts_recursion - print a string
 * @s: input
 * Return: 0(success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursions(s + 1);
	}

	else
		_putchar('\n');
}
