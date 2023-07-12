#include <stdio.h>
/**
 * main - program that print its name
 * @argc : number of args
 * return : the name 
 */
int main (int argc, char *argv[])
{  
	if (argc >= 1)
	{
		printf ("\"%s\".\n", argv[0]);
	}
	return (0);
}
