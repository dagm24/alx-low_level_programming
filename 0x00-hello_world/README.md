                                   C-Hello world
     Tasks
 0-Preprocessor
-script that runs a C file through the preprocessor and save the result into another file.
       -The C file name will be saved in the variable $CFILE
       -The output should be saved in the file c
                           gcc -E $CFILE -o c 
"-E": This option tells the compiler to stop after preprocessing. It means that the compiler will only perform the preprocessing stage, which involves macro substitution, file inclusion, and conditional compilation. The output will be the preprocessed version of the source code.

$CFILE: This seems to be a placeholder for the name of the C source file you want to compile. The actual file name should replace $CFILE when you run the command.

-o c: This option specifies the output file name. In this case, the output file will be named "c."
   So, the overall purpose of this command is to run the preprocessor on the specified C source file and generate a preprocessed version, which will be saved in a file named "c."
 1-Compiler
    script that compiles a C file but does not link.
    The C file name will be saved in the variable $CFILE
    The output file should be named the same as the C file, but with the extension .o instead of .c.
    Example: if the C file is main.c, the output file should be main.o
                           gcc -c $CFILE
-c: This option instructs the compiler to generate object files (.o) but not perform linking. It stops the compilation process after producing the object file.

$CFILE: This appears to be a placeholder for the name of the C source file you want to compile. The actual file name should replace $CFILE when you run the command.

So, the overall purpose of this command is to compile the specified C source file and produce an object file.
 2-Assembler
    Write a script that generates the assembly code of a C code and save it in an output file.
    The C file name will be saved in the variable $CFILE
    The output file should be named the same as the C file, but with the extension .s instead of .c.
    Example: if the C file is main.c, the output file should be main.s
                           gcc -S $CFILE
-S: This option instructs the compiler to stop after generating assembly code (i.e., it performs the compilation up to the assembly stage). Instead of producing an executable or object file, it outputs a text file containing the assembly code.

$CFILE: This appears to be a placeholder for the name of the C source file you want to compile. The actual file name should replace $CFILE when you run the command.

So, the overall purpose of this command is to compile the specified C source file and generate a text file containing the corresponding assembly code. The name of the output file will typically be the same as the source file, but with a ".s" extension.
 3-Name
     script that compiles a C file and creates an executable named cisfun.
     The C file name will be saved in the variable $CFILE
            gcc -c $CFILE -o cisfun
c: This option instructs the compiler to generate object files (.o) but not perform linking. It stops the compilation process after producing the object file.

$CFILE: This seems to be a placeholder for the name of the C source file you want to compile. The actual file name should replace $CFILE when you run the command.

-o cisfun: This option specifies the output file name. In this case, the output file will be named "cisfun."

So, the overall purpose of this command is to compile the specified C source file and produce an object file named "cisfun.o."
 4Hello-Puts
     C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.
     Use the function puts
     You are not allowed to use printf
     Your program should end with the value 0
1,Header Inclusion:
The inclusion of standard C libraries (<stdio.h> and <string.h>) for input/output and string manipulation.
2,Function Documentation:
A comment block documenting the purpose of the main function, specifying it as the main entry point of the program and indicating that it returns 0.
3,Variable Declaration:
Declaration of a character array named displayed with a size of 52 elements.
4,String Manipulation:
Use of strcpy to copy the string "Programming is like building a multilingual puzzle" into the displayed array.
5,Output to Console:
Printing the content of the displayed array to the console using the puts function.
6,Program Termination:
The return (0); statement, indicating that the program executed successfully.
*In essence, the code showcases basic C syntax, string manipulation, and output to the console within the context of a simple program.* 
 5-Hello,Printf
1,Header Inclusion:
The inclusion of the standard input/output library (<stdio.h>) to use the printf function.
2,Function Documentation:
A comment block documenting the purpose of the main function, specifying it as the main entry point of the program, and indicating that it returns 0.
3,Function Declaration:
Declaration of the main function, which serves as the starting point of program execution.
4,Formatted Output:
Use of the printf function to print a formatted string to the console.
5,Newline Character:
The inclusion of a newline character (\n) in the printed string to move the cursor to the next line.
6,Program Termination:
The return (0); statement, indicating that the program executed successfully.
*In summary, this code serves as a simple introduction to key elements in a C program, including function structure, basic documentation, formatted output, and program termination. It emphasizes the use of the printf function for displaying information to the console.*
 6-Size is not grandeur, and territory does not make a nation
    program that prints the size of various types on the computer it is compiled and run on.
    You should produce the exact same output as in the example
    Warnings are allowed
    Your program should return 0
    You might have to install the package libc6-dev-i386 on your Linux to test the -m32 gcc option
sizeof Operator:

Purpose: The sizeof operator in C is used to determine the size, in bytes, of a data type or an object.
Usage: sizeof(type) or sizeof(expression)
Example: sizeof(int), sizeof(char), sizeof(float), sizeof(variable)
Identifiers:
Purpose: Identifiers are names given to entities in a C program, such as variables, functions, arrays, etc.
Rules:

Must begin with a letter (uppercase or lowercase) or an underscore.
Subsequent characters can be letters, digits, or underscores.
Case-sensitive (e.g., variable and Variable are different identifiers).
Should not be a keyword or reserved word.
Examples: myVariable, _count, sum_of_values
Format Specifiers:
Purpose: Format specifiers are used in input/output functions to specify the data type of variables being read or written.
Common Format Specifiers:
%d: Integers
%f: Floating-point numbers
%c: Characters
%s: Strings
%ld: Long integers
%lf: Double-precision floating-point
Usage: printf("The value is: %d\n", myVariable);, scanf("%f", &floatVariable);
*Understanding these concepts is crucial for writing effective C programs. The sizeof operator helps manage memory, identifiers give meaningful names to program entities, and format specifiers ensure correct input and output formatting.*
 7-Intel
   script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
   The C file name will be saved in the variable $CFILE.
   The output file should be named the same as the C file, but with the extension .s instead of .c.
   Example: if the C file is main.c, the output file should be main.s
                         gcc -S -masm=intel $CFILE
-S: This option instructs the compiler to generate assembly code instead of producing an object file or an executable. It stops the compilation process after generating the assembly code.

-masm=intel: This option specifies the assembly language syntax to be used. In this case, it's set to Intel syntax. The default syntax for GCC is AT&T, so this option changes it to Intel syntax.

$CFILE: This appears to be a placeholder for the name of the C source file you want to compile. The actual file name should replace $CFILE when you run the command.

*So, the overall purpose of this command is to compile the specified C source file and generate assembly code in Intel syntax. The output file will typically have the same name as the source file but with a ".s" extension. This can be useful for examining the generated assembly code for debugging or optimization purposes.*  8-UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity
      program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
     You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
     Your program should return 1
     Your program should compile without any warnings when using the -Wall gcc option

-The write function is used to write the specified number of bytes to the specified file descriptor (in this case, file descriptor 2, which corresponds to the standard error). It prints the given string to the standard error stream. The string is the quote "and that piece of art is useful" - Dora Korpar, 2015-10-19\n", and the third argument (59) is the number of bytes to write.
-The return statement with a value of 1, indicating that the program executed successfully. The value returned by main is often used to indicate the success or failure of the program.
*In summary, this C code defines a main function that writes a specific quote to the standard error stream using the write function. The program then returns 1, indicating successful execution. The quote itself is attributed to Dora Korpar and is printed to the standard error stream (file descriptor 2).*
