#include "main.h"
#include "2-strlen.c"

/**
 * _strcpy - copies a string from source to destination
 * @dest: destination to copy the string to
 * @src: source string to be copied
 *
 * Return: pointer to the destination string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}

	return dest;
}
