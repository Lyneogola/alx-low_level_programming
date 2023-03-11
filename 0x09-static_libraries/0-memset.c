#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _memset - memory setting
 * @b: input
 * @n: char
 * @s: char
 * Return: memset
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
