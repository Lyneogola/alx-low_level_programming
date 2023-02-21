#include "main.h"

/**
 * _abs - Computes the absolute value
 * @c: The number to be Computer
 * Return: 0 or 1
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
