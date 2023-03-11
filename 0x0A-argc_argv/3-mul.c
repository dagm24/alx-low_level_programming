#include "main.h"
#include <stdio.h>
/**
 * main-prints the product of two arguments passed to it
 * @argc:counts of argumnets on command
 * @argv:pointer of the array of command line arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
int product;
if (argc != 3)
{
printf("Error\n");
return (1);
}
product = _atoi(argv[1]) * _atoi(argv[2]);
printf("%d\n", product);
return (0);
}
