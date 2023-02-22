#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints all single digit numbers of base 10
 * Return: 0 (SUCCESS)
 */
int main(void)
{
int start = 0;

while (start < 10)
{
printf("%d", start);
start++;
}
printf("\n");
return (0);
}
