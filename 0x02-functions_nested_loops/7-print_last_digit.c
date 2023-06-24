#include "main.h"
#include <ctype.h>
#include <inttypes.h>
#include <stdlib.h>
#include "6-abs.c"
/**
 * print_last_digit - main function
 *
 * @n: character to compare
 *
 * Return: last digit value of n
 *
 */
int print_last_digit(int n)
{
	int L = abs(n % 10);

	return (L);
}
