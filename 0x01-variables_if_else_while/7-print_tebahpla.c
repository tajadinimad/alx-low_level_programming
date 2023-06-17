#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
	int Alpha = 'a';

	for (Alpha = 'z'; Alpha >= 'a'; Alpha--)
		putchar(Alpha);
	putchar('\n');
	return (0);
}
