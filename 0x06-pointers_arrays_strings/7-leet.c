#include "main.h"
/**
 * leet - encodes a string into 1337 (leet) speak
 * @s: string to encode
 *
 * Return: pointer to the encoded string
 */
char *leet(char *s)
{
	char alphaArr[] = "a4A4e3E3o0O0t7T7l1L1";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alphaArr[j] != '\0'; j += 2)
		{
			if (s[i] == alphaArr[j])
			{
				s[i] = alphaArr[j + 1];
				break;
			}
		}
	}
	return (s);
}
