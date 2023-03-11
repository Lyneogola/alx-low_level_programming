#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strncat - string
 * @dest: destination
 * @src: source
 * @n: char
 * Return: source
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
