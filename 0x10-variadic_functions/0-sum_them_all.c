#include "variadic_functions.h"
/**
 * sum_them_all -  function that returns the sum of all its parameters.
 * @n: amount of the arguments
 * Return: sum of its parameters
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
