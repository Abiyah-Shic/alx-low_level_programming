#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that checks whether a random number is positive or negative
 * Return: 0 (SUCCESS)
 */
int main(void)
{
int n = rand() - RAND_MAX / 2 ;
if (n > 0)
{
printf("%i is positive\n", n);
}
else if (n == 0)
{
printf("%i is zero\n", n);
}
else
{
printf("%i is negative\n", n);
}
return (0);
}
