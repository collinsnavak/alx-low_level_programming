#include <stdio.h>

#include <time.h>

#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description - prints if random generated number is +tive, zero or -tive
 *
 * Returns: Always 0 (success)
 */int main(void)
{
int n;

strand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
printf("%d is negative\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else
printf("%d is positive\n", n);
return (0);

}
