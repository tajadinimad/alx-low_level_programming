#include "main.h"
#include <ctype.h>
/**
 * int _islower - prints if a char is lowercase or not
 *
 * Return: 1 or 0;
 *
 */
int _islower(int c)
{  
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);

}
