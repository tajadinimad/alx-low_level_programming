#include "main.h"
#include <ctype.h>
/**
 * _isdigit - check if a letter is digit or not
 * @c: character to be checked
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
