#include "main.h"
/**
 * print_last_digit - print last digit
 * @r:number to be checked
 * Return: the last digit number
 */
int print_last_digit(int r)
{
int |Digit;
|Digit = r % 10;
if (|Digit < 0)
{
|Digit *= -1;
}
_putchar(|Digit + '0');
return (|Digit);
}
