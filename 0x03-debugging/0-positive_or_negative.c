#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * postitive_or_negative - entry point
 * @n: integer to return
 * Return:always return 0
 *
 */
int postitive_or_negative(int n)
{
	/*srand(time(0));
	n = rand() - RAND_MAX / 2;*/
	if (n < 0)
	{
		printf("%d is negative\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else
	{
		printf("%d is positive\n", n);
	}
	return (0);
}

