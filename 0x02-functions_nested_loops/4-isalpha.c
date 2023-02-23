#include "main.h"
/**
 * _isalpha - A function that checks for alphabetic character.
 * @c: - The character we are checking
 * Return: 1 (Alphabet found) 0 (Alphabet not found)
 */
int _isalpha(int c)
{
if (c >= 97 && c <= 122)
return (1);
else if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
