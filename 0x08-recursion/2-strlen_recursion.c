#include "main.h"
/**
 * _strlen_recursion - Entry pnt
 * @s: input
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return ('\n');
}
