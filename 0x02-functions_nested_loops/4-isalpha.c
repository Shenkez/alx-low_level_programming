#include "main.h"

/**
 *_isalpha - checks for lower case character
 *@c: The character to be checked
 * Return: 1 if c is lowercase and  0 if otherwise
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
return (0);
}
