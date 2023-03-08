#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the char
 * @c: char
 * Return: 1(success)
 * On error , -1 is required
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
