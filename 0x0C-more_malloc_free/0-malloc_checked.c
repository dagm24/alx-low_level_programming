#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked -allocates memmeory using malloc
 * @b:number of bytes to allocate
 * Return:a pointer to the allocted memory
 * if malloc fails, ststus value is egual to 98
 */
void *malloc_checked(unsigned int b)
{
char *p;
p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}
