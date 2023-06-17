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
	int Alpha;

	for (Alpha = 'a'; Alpha <= 'z'; Alpha++)
		if (Alpha != 'q' ||  Alpha != 'e')
		{
			putchar(Alpha);
		}
	for (Alpha = 'A'; Alpha <= 'Z'; Alpha++)
		if (Alpha != 'Q' ||  Alpha != 'E')
		{
			putchar(Alpha);
		}
	putchar('\n');
	return (0);
}
