#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
_puts_print_rev_recursion(s + 1);
}
}
