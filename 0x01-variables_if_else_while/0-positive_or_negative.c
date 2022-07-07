#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * generate rondom numbers
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
{
printf("%d is negative\n", rand());
}
else if (n == 0)
{
printf("%d is zero\n", rand());
}
else
{
printf("%d is positive\n", rand());
}
return 0;
}
