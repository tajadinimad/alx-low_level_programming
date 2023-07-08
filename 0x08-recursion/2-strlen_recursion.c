#include "main.h"
#include <stdio.h>
/**
 * int _strlen_recursion - write lenght of a string
 * @s: The character to print
 *
 * Return: lenght
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
