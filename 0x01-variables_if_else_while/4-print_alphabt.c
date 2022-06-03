#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- will printout alphabet but no e and q
 * Return: will returns 0
 */

int main(void)
{
int i;
for (i = 97; i < 123; i++)
{
if (i != 101 && i != 113)
{
putchar(i);
}
}
putchar('\n');
return (0);
}

