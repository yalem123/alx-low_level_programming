#include "main.h"
#include <stdio.h>
/**
 * main - print fizz buzz
 * Return: 0 
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
_putchar(' ');
else
_putchar('\n');
return (0);
}
