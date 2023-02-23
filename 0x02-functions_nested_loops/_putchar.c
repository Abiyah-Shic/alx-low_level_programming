#include <unistd.h>
/**
 * _putchar - A function that prints a character to the stdout
 * @c - This is the character that is being printed to the standard output
 * Return: 1 (SUCCESS)
 * Return: -1 (FAILURE)
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
