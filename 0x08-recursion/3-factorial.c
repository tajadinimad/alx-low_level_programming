#include "main.h"
#include <stdio.h>
/**
 * factorial - factorial
 * @n: interger
 * Return: factorial
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
