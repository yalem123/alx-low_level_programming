#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This program will assign a random number to the variable n each time it is executed
 * it will state whether n will be positive negegative or zero
 *
 * return: Always 0.
 */

/* 
 * main - prints a random number and state whether its postive,negative or zero */
int main(main)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 1)
	printf("%d is positive\n, n");
	else if (n < 0)
	printf("%d is negative\n, n");
	else
	
	printf("%d is zero\n, n");

	return(0);
}
