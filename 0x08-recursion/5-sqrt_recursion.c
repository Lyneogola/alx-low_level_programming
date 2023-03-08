#include "main.h"
/**
 * _evaluate - function
 * @i: interger
 * @n: interger
 * Return: evaluate
 */
int _evaluate(int i, int n)
{
	if (n == 0 || n == 1)
		return (n);

	else if (i * i < n)
		return (_evaluate(i + 1, n));

	else if (i * i == n)
		return (i);

	return (i);

	return (-1);
}
