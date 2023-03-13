#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main-checks the code
 * Return:0
 */
int main(void)
{
char *s;
s = _str_concat("Betty", "Holberton");
if (s == NULL)
{
printf("failed\n");
return (1);
}
printf("%s\n", s);
free(s);
return (0);
}
