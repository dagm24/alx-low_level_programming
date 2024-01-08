#include "main.h"

/**
 * print_alphabet_x10 - Check Main
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
       // Variable to store the current character
	char i;
	int j; // Variable for the loop counter
         // Outer loop runs 10 times
	for (j = 0; j < 10; j++)
	{
		// Inner loop prints the lowercase alphabet
		for (i = 'a'; i <= 'z'; i++)
			// Call the _putchar function to print the current character
			_putchar(i);
		_putchar('\n');
	}
}
