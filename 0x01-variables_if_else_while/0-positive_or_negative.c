#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * generate rondom numbers
 */
int main()
{
	srand(time(NULL));
	printf("%d\n", rand());
	return 0;
}
