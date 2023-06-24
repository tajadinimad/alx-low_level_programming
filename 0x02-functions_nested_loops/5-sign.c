#include "main.h"
#include <ctype.h>
/**
 * print_sign - main function
 *
 * @n: character to compare
 *
 * Return: 1 if positive, -1 if negative , 0 if null
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{	
		_putchar('-');
		return (-1);
	}
}
