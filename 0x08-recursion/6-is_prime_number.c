#include "main.h"
/**
 * evaluate_num - recursion
 * @num: num
 * @iterator: num
 * Return: 1 0r 0
 */
int evaluate_num(int num, int iterator)
{
	if (iterator == num - 1)
	{
		return (1);
	}


	else if (num % iterator == 0)
	{
		return (0);
	}

	if (num % iterator != 0)
	{
		return (evaluate_num(num, iterator + 1));
	}

	return (0);

	/**
	 * is_prime_number - numb
	 * @num: number
	 * Return: 1 or 0
	 */

	int is_prime_number(int num)
	{
		int iterator;

		iterator = 2;

		if (num < 2)
		{
			return (0);
		}

		if (num == 2)
		{
			return (1);
		}
		return (evaluate_num(num, iterator));
	}
}
