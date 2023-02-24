#include "main.h"
#include <stdio.h>
/**
 * main -prints the numbers from 1 to 100, followed by a new line
 * but for multiple of three prints Fizz intead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0
 */
int main(void)
{
int i;
i = 1;
printf("%d", i);
printf(" ");
for (i = 2; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 != 0)
{
printf(" ");
printf("Fizz");
printf(" ");
}
else if (i % 5 == 0 && i % 3 != 0)
{
printf(" ");
printf("Buzz");
printf(" ");
}
else if (i % 3 == 0 && i % 5 == 0)
{
printf(" ");
printf("FizzBuzz");
printf(" ");
}
else
{
printf(" "); 
printf("%d", i);
}
}
printf("\n");
return (0);
}
