#include "main.h"
/**
 * _memset - fill a block
 * @s: STARTING AN ADDRESS
 * @b:  the desired vlue
 * @n: numb
 * Return: change aray
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
