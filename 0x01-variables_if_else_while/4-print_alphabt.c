#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints lowercase alphabets except q and e
 * Return: 0 (SUCCESS)
 */
int main(void)
{
char lower = 'a';

while (lower <= 'z')
{
if (lower != 'q' && lower != 'e')
{
putchar(lower);
}
lower++;
}
putchar('\n');
return (0);
}
