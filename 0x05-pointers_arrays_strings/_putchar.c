#include <unistd.h>

/**
 * _putchar - write c to stdout
 * @c: char to be printed
 * Return: On sucess 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

