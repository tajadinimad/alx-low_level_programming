#include "main.h"
/**
 * swap_int - resets value to 98
 *
 * @a: pointer integer
 * @b: pointer integer
 */
void swap_int(int *a, int *b)
{
	 int c = *b;
	 int d = *a;

	 *a = c;
	 *b = d;
}
