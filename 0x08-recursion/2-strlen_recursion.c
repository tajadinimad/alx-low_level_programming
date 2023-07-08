#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - write lenght of a string
 * @s: The character to check its length
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n = _strlen_recursion(s + 1);
		return (n += 1);
	}
	return (0);
}
