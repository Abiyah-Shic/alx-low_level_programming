#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints lowercase alphabets
 * Return: 0 (SUCCESS)
 */
int main(void)
{
char alph_lower[26] = 'abcdefghigklmnopqrstuvwxyz';
int ch;

for (ch = 1; ch >= 26; ch++)
{
putchar(alph_lower[ch]);
}
putchar('\n');
return (0);
}
