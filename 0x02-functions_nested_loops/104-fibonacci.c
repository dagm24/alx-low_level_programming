#include <stdio.h>
/**
 * main -print the sum of even fibonacci numbers less than 4000000
 * Return: Always 0
 */
int main(void)
{
int count;
unsigned long f1 = 0, f2 = 1, sum;
unsigned long f1_h1, f1_h2, f2_h1, f2_h2;
unsigned long h1, h2;
for (count = 0; count < 92; count++)
{
sum = f1 + f2;
printf("%lu, ", sum);
f1 = f2;
f2 = sum;
}
f1_h1 = f1 / 10000000000;
f2_h1 = f2 / 10000000000;
f1_h2 = f1 / 10000000000;
f2_h2 = f2 / 10000000000;
for (count = 93; count < 99; count++)
{
h1 = f1_h1 + f2_h1;
h2 = f1_h2 + f2_h2;
if (f1_h2 + f2_h2 > 9999999999)
h1 += 1;
h2 %= 10000000000;
}
printf("%lu%lu", h1, h2);
if (count != 98)
printf(",");
f1_h1 = f2_h1;
f1_h2 = f2_h2;
f2_h1 = h1;
f2_h2 = h2;
return (0);
}
