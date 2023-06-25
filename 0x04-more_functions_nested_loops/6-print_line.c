#include "main.h"
/**
 * print_line -  function that draws a
 * straight line in the terminal.
 * @n : number of time to print _
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i == 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
