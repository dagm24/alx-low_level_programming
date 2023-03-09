#include "main.h"
#include <stdio.h>
/**
 * main -checks the code
 * Return: 0
 */
int main(void)
{
int r;
r = wildcamp("main.c", "*.c");
printf("%d\n", r);
r = wildcamp("main.c", "m*a*i*n .*c*");
printf("%d\n", r);
r = wildcamp("main.c", "main.c");
printf("%d\n", r);
r = wildcamp("main.c", "m*c");
printf("%d\n", r);
r = wildcamp("main.c", "ma********************************c");
printf("%d\n", r);
r = wildcamp("main.c", "*");
printf("%d\n", r);
r = wildcamp("main.c", "***");
printf("%d\n", r);
r = wildcamp("main.c", "m.*c");
printf("%d\n", r);
r = wildcamp("main.c", "**.*c");
printf("%d\n", r);
r = wildcamp("main-main.c", "ma*in.c");
printf("%d\n", r);
r = wildcamp("main", "main*d");
printf("%d\n", r);
r = wildcamp("abc", "*b");
printf("%d\n", r);
return (0);
}
