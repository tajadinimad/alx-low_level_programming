#include "main.h"

/**
 * _strncat - concatenates two arrays
 *
 * @dest: destination of concatenation
 * @src: source array to concatenate
 * @n: amount of characters to append from src
 *
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_length = 0;
	int i;

	while (dest[dest_length] != '\0')
	{
		dest_length++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_length + i] = src[i];
	}

	dest[dest_length + i] = '\0';

	return (dest);
}
