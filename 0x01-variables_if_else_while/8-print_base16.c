i#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 * main - Entry point
 *
 * Returns: always 0 (Success)
 */

int main(void)
{
char character;
for (character = '0' ; character <= '9' ; character++)
{
putchar(character);
}
for (character = 'a' ; character <= 'f' ; character++)
{
putchar(character);
}
putchar('\n');
return (0);
}
