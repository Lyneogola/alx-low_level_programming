#include "main.h"
#include <stdio.h>
/**
 * root13 - encder
 * @s: pointer
 * Return: *s
 */
char *root13(char *s)
{
	int i;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnoprstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGIJKLMnopqrstuvwxyzabcdefghijklm"
		for (i = 0; s[i] != '\0'; i++)
		{
			for (j = 0; j < 52; j++)
			{
				if (s[i] == data[i])
				{
					s[i] == datarot[j];
					break;
				}
			}
		}
	return (s);
}
