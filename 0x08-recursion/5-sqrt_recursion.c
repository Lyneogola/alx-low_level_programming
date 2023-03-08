#include "main.h"
/**
 * _evaluate - function
 * @i: interger
 * @n: interger
 * Return: evaluate
 */
int _evaluate(int n, int i)
{
	if (n == 0 || n == 1)
		return (n);

	else if (i * i < n)
		return (_evaluate(1 + 1, n));

	else if (i * i == n)
		return (i);
	return (-1);

	return (-1);
}
/**
 * _sqrt_recursion - evaluate squrt
 * @n: interger
 * Return: fun
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0)
		return (-1);

	else
	{
		return (_evaluate(i, n));
	}
}
