#include "main.h"
#include <ctype.h>
#include <inttypes.h>
#include <stdlib.h>
#include "6-abs.c"
#include "time.h"
/**
 * print_last_digit - main function
 *
 *
 * Return time MM:SS
 *
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar('\n');
		}
	}
}
