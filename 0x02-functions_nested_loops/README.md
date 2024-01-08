                                     0x02-functions_nested_loops
    0-putchar.c
    
function prototype ---  int_putchar(char c);

int: This specifies that the function will return an integer value.

_putchar: This is the name of the function.

(char c): This indicates that the function takes a single parameter, which is a character and is named c.

The program uses a function called _putchar to print the characters of the string "_putchar" followed by a newline character ('\n'). 

     1-alphabet.c
     
function prototype ----  void print_alphabet(void);

void: Indicates that the function doesn't return any value.

print_alphabet: The name of the function.

(void): Specifies that the function takes no arguments.

     this code demonstrates the use of a function to print the lowercase alphabet by iterating through the characters from 'a' to 'z' using a loop. The _putchar function is assumed to handle the actual character printing.

     2-print_alphabet_x10.c

function prototype --- void print_alphabet_x10(void)

     code demonstrates the use of nested loops to print the lowercase alphabet 10 times. The outer loop controls the repetition, and the inner loop prints each character of the alphabet using the _putchar function. 

        3-islower.c

function prototype --- int _islower(int c);

code uses a loop to iterate through the lowercase alphabet and checks if the input character matches any of the lowercase letters. The function returns 1 if the character is lowercase and 0 if it is uppercase. 
