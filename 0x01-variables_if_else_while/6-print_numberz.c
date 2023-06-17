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
	int Digit = '0';

	for (Digit = '0'; Digit <= '9'; Digit++)
	{
		putchar(Digit);
	}
	putchar('\n');
	return (0);
}
