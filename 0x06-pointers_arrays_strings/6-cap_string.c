#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	{
		len++;
	}
	return (len);
}

/**
 * cap_string - capitalizes all words in a string
 * @s1: pointer to the string
 *
 * Description: Capitalizes the first letter of each word in the string.
 *
 * Return: a pointer to the capitalized string
 */
char *cap_string(char *s1)
{
	int i, j;

	for (i = 0; i < _strlen(s1) - 1; i++)
	{
		if (s1[i] == ' ' || s1[i] == '\t' || s1[i] == '\n' ||
		    s1[i] == ',' || s1[i] == ';' || s1[i] == '.' ||
		    s1[i] == '!' || s1[i] == '?' || s1[i] == '"' ||
		    s1[i] == '(' || s1[i] == ')' || s1[i] == '{' ||
		    s1[i] == '}')
		{
			for (j = 'a'; j <= 'z'; j++)
			{
				if (s1[i + 1] == j && i != 0)
				{
					s1[i + 1] = j - 32;
				}
				else if (s1[i] == j && i == 0)
				{
					s1[i] = j - 32;
				}
			}
		}
	}
	return (s1);
}
