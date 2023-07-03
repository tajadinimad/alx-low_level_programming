#include "main.h"

/**
 * _memset - sets memory to a specific value
 * @s: pointer to the memory area to be filled
 * @b: value to be set
 * @n: number of bytes to be set
 *
 * Return: pointer to the filled memory area (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
