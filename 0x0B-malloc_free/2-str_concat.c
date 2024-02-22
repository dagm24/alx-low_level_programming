#include "main.h"
#include <stdlib.h>
/**
 * str_concat-concatenates 2 strings
 * @s1:string to conacantenate
 * @s2: other string
 * Return:pointer to the new string created(success) or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int i;
	char *concatstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;
	concatstr = malloc(sizeof(char) * (len1 + len2) + 1);
	if (concatstr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		concatstr[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		concatstr[len1 + i] = s2[i];
	return (concatstr);
}
