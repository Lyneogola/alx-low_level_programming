#include <stdio.h>
#include "main.h"
/**
 * _putchar - wrute thre char
 * @c: char
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
