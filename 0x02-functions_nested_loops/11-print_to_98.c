#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print natual numbers
 * @n: number to start count
 */
void print_to_98(int n)
{
if (n > 98)
{
for (n = n; n >= 98; n--)
printf("%d", n);
printf("%d\n", 98);
}
if (n < 98)
{
printf("%d, n");
}
else
{
for (n = n; n <= 98; n++)
printf("%d", n);
printf("%d\n", 98);
}
}
