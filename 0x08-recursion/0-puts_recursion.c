#include "main.h"
/***
 * File: 0-puts
 * Auth: sam
 * _puts_recursion - prints
 * @s: input
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
