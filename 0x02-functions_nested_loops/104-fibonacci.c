#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
float i, j, k;
int c;

i = 1;
j = 2;


printf("%.f, %.f", i, j);
for (c = 2; c < 98; c++)
{
k = i + j;
i = j;
j = k;
printf(", %.f", k);
}
printf("\n");
return (0);
}
