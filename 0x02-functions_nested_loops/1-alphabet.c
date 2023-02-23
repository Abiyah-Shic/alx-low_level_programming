#include "main.h"
/**
 * print_alphabet - A function that prints the alphabet, in lowercase
 * Return: void
 */
void print_alphabet(void)
{
char start = 'a';

while (start <= 'z')
{
_putchar(start);
start++;
}
_putchar('\n');
}
