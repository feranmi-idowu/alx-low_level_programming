#include "main.h"
#include <stdio.h>

/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
int i, j;

while (str[i] != '\0')
i++;
if (i % 2 == 0)
j = i / 2;
else
j = (i + 1) / 2;
while (j < i)
{
putchar(str[j]);
j++;
}
putchar('\n');
}
