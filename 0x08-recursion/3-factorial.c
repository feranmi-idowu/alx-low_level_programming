#include "main.h"

/**
 * _strlen_recursion - note: no _putchar in local test
 * @s: input
 * @n: input
 * Return: Always 0 (Success)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
