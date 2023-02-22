#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints lowercase alphabets
 * Return: 0 (SUCCESS)
 */
int main(void)
{
int ch;

for (ch = 'a'; ch >= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
