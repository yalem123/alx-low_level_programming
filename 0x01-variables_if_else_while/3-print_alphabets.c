#include <stdio.h>
/**
 * main - Entry point
 * Description - prints the alphabet in lowercase, and then in uppercase
 * Return: 0 Always
 */
int main(void)
int c;
for (c = 0; c < 26; ++c)
putchar('a' + c);
for (c = 0; c < 26; ++c)
putchar('A' + c);
putchar('\n');
return (0);
