#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints all single digit numbers
 * Return: 0 (SUCCESS)
 */
int main(void)
{
int start = 48;

while (start <= 57)
{
putchar(start);
if (start != 57)
{
putchar(',');
putchar(' ');
}
start++;
}
putchar('\n');
return (0);
}
