#include "main.h"
/**
 * _puts_recursion-function like puts()
 * @s:input
 * Return: 0
 */
void _puts_recursion(char *s)
{
if (*s)
{9
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
