#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- will show if greater than 5, less than 6 or 0
 * Return: will returns 0
 */

int main(void)
{
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;

for (i = 0; i < 52; i++)
{
putchar(alp[i]);
}
putchar('\n');
return (0);
}
