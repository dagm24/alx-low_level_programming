#include "main.h"

/**
 * print_alphabet - prints the alphabe, in lowercase, followed by a new line
 */
void print_alphabet(void)
{
    // Variable to store the current character
    char ch;

    // Initialize the variable with the first lowercase letter 'a'
    ch = 'a';

    // Loop through the lowercase alphabet
    while (ch <= 'z')
    {
        // Call the _putchar function to print the current character
        _putchar(ch);

        // Increment the character to move to the next one in the alphabet
        ch++;
    }

    // After printing all characters, print a newline character
    _putchar('\n');
}
