#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints lowercase alphabets
 * Return: 0 (SUCCESS)
 */
int main(void)
{
char ch;

for (ch = 97; ch >= 122; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
