#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int Alpha = 'a';

	for (Alpha = 'a'; Alpha <= 'z'; Alpha++)
		if (Alpha != 'q' ||  Alpha != 'e')
		{
			putchar(Alpha);
		}
	putchar('\n');
	return (0);
}
