#include "main.h"
/**
 * _isupper -checks if a character is uppercase or not
 * @c:tested character
 * Return: 1 if it is uppercase, 0 if not
 */
int _isupper(int c);
{
if ((c >= 65) && (c <= 90))
{
return (1);
}
else
{
return (0);
}
}
