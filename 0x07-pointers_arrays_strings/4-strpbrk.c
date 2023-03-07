include "main.h"
/**
 * _strpbrk - Entry pnt
 * @s: input
 * @accept: input
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	ink k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
