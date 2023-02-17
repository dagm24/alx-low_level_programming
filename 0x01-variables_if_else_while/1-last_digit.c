#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always (Success)
 */
int main(void)
	int i;
	int m;
	 srand(time(0));
	i = rand() - RAND_MAX / 2;
	m = i % 10;

	if (m == 0)
{
	printf("Last digit of %d is %d and is 0\n", i, m);
}
else
{
	if (m > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", i, m);
	}
	else if (m < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", i, m);
	}
}
return (0);
}
