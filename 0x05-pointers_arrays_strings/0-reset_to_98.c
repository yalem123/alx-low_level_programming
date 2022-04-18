#include "main.h"
/**
 * void reset_to_98 - function that takes a pointer to an int as parameter
 * @n: the number to modify
 */
void reset_to_98(int *n)
{
int *n;
int *p;
*n = 5;
p = &n;
_putchar("value of n: %d\n", n);
*p = 98;
_putchar("value of n: %d\n", n);
}
