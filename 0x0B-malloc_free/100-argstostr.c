#include "main.h"
#include <stdlib.h>
/**
 * argstostr-concatenates all the argments of the program
 * @ac:number of arguments
 * @av:array of arguments
 * Return:pointer to the new string(success) NULL
 */
char *argstostr(int ac, char **av)
{
int i, j, k, len;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
len++;
len++;
}
str = malloc(sizeof(char) * (len + 1));
if (str == NULL)
return (NULL);
k = 0;
for (i = 0; i < ac; i++)
{
for (j  = 0; av[i][j] != '\0'; j++)
{
str[k] = av[i][j];
}
str[k] = '\n';
k++;
}
return (str);
}

