#include "main.h"

/**
 * _islower - Check Main
 * @c: An input character
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _islower(int c)
{
	char i;
	int lower = 0;/* Variable to indicate whether the character is lowercase*/
        /* Loop through the lowercase alphabet*/
	for (i = 'a'; i <= 'z'; i++)
	{
		/*Check if the current character matches the input character*/
		if (i == c)
			/*Set the 'lower' variable to 1 if it is a lowercase letter*/
			lower = 1;
	}
        /* Return the value of 'lower' (1 if lowercase, 0 if uppercase)*/
	return (lower);
}
