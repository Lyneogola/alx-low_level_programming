#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strspn - func
 * @s: char
 * @accept: condi
 * Return: strspn
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
