#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * return: Always 0 (success)
 */
int main(void)
{
	int n,lastd;

	srand(time(0));
        n = rand() - RAND_MAX / 2;
	lastd = n % 10;

	if(lastd > 5)
	{ 
	           printf("last digit of %d is %d and 
			     is greater than 5\n", n,lastd);
	}
	elseif(lastd==0)
	{
	           printf("last digit of %d is %d and 
			       is 0\n", n,lastd);
	}
	elseif(lastd < 6 && lastd !=0)
	{
	           print("last digit of %d is %d and is lessthan 6 
			   and not 0\n",n,lastd);
	}

	return (0);
}

