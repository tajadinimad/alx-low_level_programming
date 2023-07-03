#include "main.h"
/**
 * _memcpy - copies n bytes from source to destination
 * @dest: pointer to the destination array
 * @src: pointer to the source array
 * @n: number of bytes to be copied
 *
 * Return: pointer to the destination array (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
