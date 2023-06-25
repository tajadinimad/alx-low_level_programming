#include "main.h"
#include <ctype.h>
/**
 * more_numbers - function that print numbers from 0 to 14
 * repeated 10 times
 * Return: void
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j = 0;

		for (j = 0; j < 14; j++)
		{
			_putchar(j + '0');
		}
		_putchar('\n');
	}
}
