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
n = rand() - RAND_MAX / 2
if (n < 0)
{
printf("%d\n is negative", rand());
}
else if (n > 0)
{
printf("%d\n is positive", rand());
}
else
{
printf("%d\n is zero", rand());
}
return 0;
}
