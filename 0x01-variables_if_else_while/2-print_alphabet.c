#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program that prints lowercase alphabets
 * Return: 0 (SUCCESS)
 */
int main(void)
{
char ch = 'a';

while (ch >= 'z')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
