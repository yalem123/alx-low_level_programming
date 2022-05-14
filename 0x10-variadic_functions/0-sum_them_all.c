#include "variadic_functions.h"
/**
 * sum_them_all -  function that returns the sum of all its parameters.
 * @n: amount of the arguments
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i;
va_list arguments;
if (n)
{
va_start(arguments, n);
for (i = 0; i < n; i++)
{
sum += va_arg(arguments, int);
}
va_end(arguments);
}
return (sum);
}
int main()
{
_putchar("sum_them_all = %d\n", sum_them_all(3, 2, 1));
return (0);
}
