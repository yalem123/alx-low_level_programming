#include "main.h"
#include <stdio.h>
/**
 * main - print fizz buzz
 * Return: Always 0. 
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 != 0)
{
printf("FIZZ");
}
else if (i % 3 != 0 && i % 5 == 0)
{
printf("BUZZ");
}
else if (i % 3 == 0 && i % 5 == 0)
{
printf("FIZZBUZZ");
}
else
{
printf("%d", i);
}
}
if (i != 100)
printf(" ");
else
printf("\n");
return (0);
}
