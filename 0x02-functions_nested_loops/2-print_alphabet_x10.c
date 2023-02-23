#include "main.h"
/**
 * print_alphabet - A function that that prints 10X the alphabet, in lowercase
 * Return: void
 */
void print_alphabet_x10(void)
{
int i;

for (i = 1; i <= 10; i++)
{
char start = 'a';

while (start <= 'z')
{
_putchar(start);
start++;
}
_putchar('\n');
}
}
