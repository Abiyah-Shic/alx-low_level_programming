#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that checks whether a random number is positive or negative
 * Return: 0 (SUCCESS)
 */
int main(void)
{
long int n = rand();
if (n > 0)
{
printf("%li is positive\n", n);
}
else if (n  0)
{
printf("%li is zero\n", n);
}
else
{
printf("%li is negative\n", n);
}
return (0);
}
