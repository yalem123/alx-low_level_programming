#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: pointer for string
 * Return: void
 */
void rev_string(char *s)
{
int i = 0;
while (s[i] != '\0')
i++;
while (i--)
{
_putchar(s[i]);
}
}
