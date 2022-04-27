#include "main.h"
/**
 * _pow_recursion - value of exponenet
 * @x: integer
 * @y: integer two
 * Return: the exponent
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else
return (x * _pow_recursion(x, y - 1));
}
