#include "main.h"
/**
 * _islower - A function that checks for lowercase character.
 * @c: - The character that we are checking
 * Return: 1 (Lowercase character found)
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
