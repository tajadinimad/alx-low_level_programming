#include "main.h"
#include <ctype.h>
/**
 * _isupper - check if a letter is low case or uppercase
 * left in the year, taking leap years into account
 * @c: character to be tester
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
