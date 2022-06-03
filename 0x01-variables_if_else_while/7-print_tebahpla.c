#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- will show lowercase alphabet in reverse
 * Return: will returns 0
 */

int main(void)
{
int i;
for (i = 122; i > 96; i--)
{
putchar(i);
}
putchar('\n');
return (0);
}
