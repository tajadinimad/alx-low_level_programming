#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - write string
 * @s: The character to print
 *
 * Return: string
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
	{
		_putchar('\n');
	}
}
