#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - Write a function that prints half of a string
 *
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int n;
	int i;

	if (_strlen(str) % 2 == 0)
	{
		n = _strlen(str) / 2;
	}
	else
	{
		n = (_strlen(str) - 1) / 2;
		n = n + 1;
	}
	for (i = n; i < _strlen(str); i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
