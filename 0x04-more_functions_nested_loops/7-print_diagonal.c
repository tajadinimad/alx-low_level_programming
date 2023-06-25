#include "main.h"
/**
 * print_diagonal -  function that draws a
 * diagonal  line n the terminal.
 * @n : number of time to print _
 * Return: void
 */
void print_diagonal(int n)
{
if (n == 0)
{
	_putchar('\n');
}
else
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
}
