#include "main.h"
#include <string.h>
/**
 * rev_string - function that prints a reversed string
 * @s: pointer string
 */
void rev_string(char *s)
{
	int c = strlen(s);
	int i;

	for (i = c - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
