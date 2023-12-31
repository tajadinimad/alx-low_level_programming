#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 */
void print_number(int n)
{
	unsigned int abs;
	int mult = 1;
	unsigned int absCount;
	int i;
	int c = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	if (n < 0)
	{
		_putchar('-');
		n += 1;
		n *= -1;
		n++;
	}
	abs = n;
	absCount = n;

	while (absCount > 0)
	{
		absCount /= 10;
		c++;
	}
	for (i = 0; i < c - 1; i++)
	{
		mult *= 10;
	}

	for (i = 0; i < c; i++)
	{
		_putchar((abs / mult) + '0');
		abs = abs % mult;
		mult /= 10;
	}
}
