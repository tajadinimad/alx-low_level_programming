#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: always 0;
 *
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
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: always 0;
 *
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
