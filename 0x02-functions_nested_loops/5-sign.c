#include "main.h"
/**
 * print_sign - A function prints the sign of a number.
 * @n: The number that we are checking
 * Return: 1 (greater than 0) 0 (is 0) -1 (less than 0)
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}

else if (n == 0)
{
_putchar('0');
return (0);
}

else
{
_putchar('-');
return (-1);
}
}
