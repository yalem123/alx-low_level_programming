#include "main.h"
/**
 * print_numbers - prints the numbers zero upto nine
 * Return: 0 Always
 */
void print_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
_putchar((i % 10), i);
}
_putchar('\n');
}
