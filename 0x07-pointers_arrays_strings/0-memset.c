#include "main.h"
#include <stdio.h>
/**
 * _memset -fill a block of memory with a specific value
 * @s:statrting adress of memory to be filled
 * @d:the desired value
 * @n:number of bytes to be changed
 * Return:changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
	{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}
