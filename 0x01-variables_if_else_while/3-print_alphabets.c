#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints both lower and uppercase letters
 * Return: 0 (SUCCESS)
 */
int main(void)
{
char lower = 'a';
char upper = 'A';

while (lower <= 'z')
{
putchar(lower);
lower++;
}

while (upper <= 'Z')
{
putchar(upper);
upper++;
}

putchar('\n');
return (0);
}
