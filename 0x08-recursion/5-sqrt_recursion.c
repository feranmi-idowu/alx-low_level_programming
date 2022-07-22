#include"main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 *
 * Return: natural square root or -1
 */
int sqrt_check(int g, int c)
{
if (g * g == c)
return (g);
if (g * g > c)
return (-1);
return (sqrt_check(g + 1, c));
}
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
return (sqrt_check(1, n));
}
