#include "main.h"

/**
 * _strlen_recursion - size
 * @s: pointer
 * Return: pnt
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * p1 - palindrome
 * @s: pointer
 * @l: position
 * Return: boolena
 */

int p1(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}

	if (*s == *(s + 1))
	{
		return (p1(s + 1, 1 - 2));
	}
	return (0);
}
