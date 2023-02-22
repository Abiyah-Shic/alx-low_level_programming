#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints both lower and uppercase letters
 * Return: 0 (SUCCESS)
 */
int main(void)
{
char lower = 48;
char upper = 97;

while (lower <= 57)
{
putchar(lower);
lower++;
}

while (upper <= 102)
{
putchar(upper);
upper++;
}

putchar('\n');
return (0);
}
