#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_tab-prints of string
 * @tab: the array to print
 * Return:nothing
 */
void print_tab(char **tab)
{
int i;
for (i = 0; tab[i] != NULL; ++i)
{
printf("%s\n", tab[i]);
}
}
/**
 * main-checks the oode
 * Return:0
 */
int main(void)
{
char **tab;
tab = strtow("     ALX School      #cisfun       ");
if (tab == NULL)
{
printf("failed\n");
return (1);
}
print_tab(tab);
return (0);
}
