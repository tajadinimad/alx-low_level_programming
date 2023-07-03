#include "main.h"
/**
 * rot13 - encodes a string using rot13 encryption
 * @s: string to encode
 *
 * Return: pointer to the encoded string
 */
char *rot13(char *s)
{
	char part1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char part2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; part1[j] != '\0'; j++)
		{
			if (s[i] == part1[j])
			{
				s[i] = part2[j];
				break;
			}
		}
	}
	return (s);
}
