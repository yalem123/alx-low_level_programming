#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints if number is positive ,zero or negative.
 *
 * return: Always 0.
 */

/* 
 * main - prints a random number and state whether its postive,negative or zero */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 1)
	printf("%d is positive\n", n);
	else if (n < 0)
	printf("%d is negative\n", n);
	else
	
	printf("%d is zero\n", n);

	return(0);
}
