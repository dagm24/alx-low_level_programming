#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, k, l, x, y;
i = j = k = l = 48;
while (l < 58)
{
k = 48;
while (j < 58)
{
i = 48;
while (k < 58)
{
j = 48;
while (i < 58)
{
x = (l * 10) + k;
y = (j * 10) + i;
if (x < y)
{
putchar(l);
putchar(k);
putchar(' ');
putchar(j);
putchar(i);
if (l == 57 && k == 56 && j == 57 && i == 57)
break;
putchar(',');
putchar(' ');
}
i++;
}
j++;
}
k++;
}
l++;
}
putchar('\n');
return (0);
}
