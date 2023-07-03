#include "main.h"
#include <string.h>
/**
 * print_rev - function that prints a reversed string
 * @s: pointer string
 */
void print_rev(char *s)
{
	int c = strlen(s);
	int i;

	for (i = c; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
}
