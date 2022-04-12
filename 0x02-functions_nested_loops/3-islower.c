#include "main.h"
/**
 * Description - function that checks for lowercase character
 * @c: The character tobe checked
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
