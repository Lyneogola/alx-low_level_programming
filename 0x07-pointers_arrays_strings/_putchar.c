#include "main.h"
#include <unstd.h>

/**
 * _putchar - writes the character
 * @c: print char
 * Return: on success
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
