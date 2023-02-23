#include "main.h"
/**
 * _abs - A function computes the absolute value of an integer.
 * @n: The number that we are checking
 * Return:1 (SUCCESS)
 */
int _abs(int n)
{
if (n > 0)
{
return (n);
}

else if (n == 0)
{
return (0);
}

else
{
return ((n * (-1)));
}
}
