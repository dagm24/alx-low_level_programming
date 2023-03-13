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
s = argstostr(ac, av);
if (s == NULL)
{
return (1);
}
printf("%s", s);
free(s);
return (0);
}
