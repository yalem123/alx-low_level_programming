#include "main.h"
/**
 * print_most_numbers - prints the numbers except two and four
 */
void print_most_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
if (i == 2 || i == 4)
i++;
_putchar("%d", i);
}
_putchar("\n");
}
