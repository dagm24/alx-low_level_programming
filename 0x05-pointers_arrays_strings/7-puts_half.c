#include "main.h"
/**
 * puts_half -print half a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str:input
 * return:half of input
 */
void puts_half(char *str)
{
int i, n, longi;
longi = 0;
for (i = 0; str[i] != '\0'; i++)
longi++;
n = (longi / 2);
if ((longi % 2) == 1)
n = ((longi + 1) / 2);
for (i = n; str[i] != '\0'; i++)
_putchar('\n');
}
