#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - _sqrt_recursion
 * @n: integer
 * Return: sqrt of n
 */
int _sqrt_recursion(int n)
{
	if (sqrt(n))
	{
		return (_sqrt_recursion(n - 1));
	}
	return (-1);
}
