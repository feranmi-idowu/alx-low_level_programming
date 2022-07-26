#include<unistd.h>

/**
 * main - print putchar
 * @c: the character to print
 *
 * Return: always return 0
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
