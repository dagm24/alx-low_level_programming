#include "main.h"
#include <stdlib.h>
/**
 * _strdup-returns a pointer to a newly allocated space in memory
 * @str:string
 * Return:pointer of array of chars
 */
char *_strdup(char *str)
{
char *duplicate;
unsigned int i, j;
i = 0;
j = 0;
if (str == NULL)
return (NULL);
while (str[j])
j++;
duplicate = malloc(sizeof(char) * (j + 1));
if (duplicate == NULL)
return (NULL);
while ((duplicate[i] = str[i]) != '\0')
i++;
return (duplicate);
}

