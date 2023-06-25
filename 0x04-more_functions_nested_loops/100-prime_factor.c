#include <stdio.h>
#include <math.h>

/**
 * main - Finds and prints the largest prime factor of a given number
 *        followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int number;
	long int largestFactor;
	long int factor;

	number = 612852475143;
	largestFactor = -1;

	while (number % 2 == 0)
	{
		largestFactor = 2;
		number /= 2;
	}

	for (factor = 3; factor <= sqrt(number); factor = factor + 2)
	{
		while (number % factor == 0)
		{
			largestFactor = factor;
			number = number / factor;
		}
	}

	if (number > 2)
		largestFactor = number;

	printf("%ld\n", largestFactor);

	return (0);
}
