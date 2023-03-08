/**
 * _puts_recursion - print a string
 * @S: input
 */
#include "main.h"
void _puts_recursion(char *S)
{
	if (*S)
	{
		_putchar(*s);
		_puts_recursions(s + 1);
	}

	else
		_putchar('\n');
}
