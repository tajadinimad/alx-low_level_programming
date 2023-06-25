#include "main.h"
#include <ctype.h>
/**
 * print_numbers - function that print numbers from 0 to 9
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
