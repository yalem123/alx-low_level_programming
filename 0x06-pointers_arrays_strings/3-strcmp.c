#include "main.h"
/**
 * @s1: first charcter
 * @s2: second character 
 * Return: 0 if s1 and s2 are equals
 */
int _strcmp(char *s1, char *s2)
{
int i = 0, op = 0;
while (op == 0)
{
if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
break;
op = *(s1 + i) - *(s2 + i);
i++;
}
return (op);
}
