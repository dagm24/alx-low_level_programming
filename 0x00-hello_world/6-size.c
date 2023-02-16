#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (Success)
 */
int main(void)
{
	int l;
	long int m;
	long long int n;
	char o;
	float f;
       	printf("size of a char: %lubyte(s)\n",(unsigned long)sizeof(o));
	 printf("size of an int: %lubyte(s)\n", (unsigned long)sizeof(l));
	 printf("size of a long int: %lubyte(s)\n", (unsigned long)sizeof(m));
	 printf("size of a long long int: %lubyte(s)\n", (unsigned long)sizeof(n));
	 printf("size of a float: %lubyte(s)\n", (unsigned long)sizeof(f));
	 
	 return (0);
}
