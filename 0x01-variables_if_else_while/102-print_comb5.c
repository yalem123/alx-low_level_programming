#include <stdio.h>
/**
 * main - Entry point
 * combining two digit numbers
 * return: 0 Always
 */
int main(void)
{
int dgt1,dgt2;
for (dgt1 = 0; dgt1 <= 98; dgt1++)
{
for (dgt2 = dgt1 + 1; dgt2 <= 99; dgt2++)
{
putchar((dgt1 / 10) + '0');
putchar((dgt1 % 10) + '0');
putchar(' ');
putchar((dgt2 / 10) + '0');
putchar((dgt2 % 10) + '0');
if (dgt1 == 98 && dgt2 == 99)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
