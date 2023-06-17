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

	for (Alpha = 'a'; Alpha <= 'z'; Alpha++)
	{
		if (Alpha == 'q' ||  Alpha == 'e')
		{
			continue;
		}
		else
		{
			putchar(Alpha);
		}
	}
	putchar('\n');
	return (0);
}
