#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int R = 0;

	while (R < 10)
	{
		print_alphabet();
		R++;
	}
}
