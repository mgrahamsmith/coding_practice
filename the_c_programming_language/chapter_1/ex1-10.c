////////////////////////////////////////////////////////////////////////////////
///
/// Exercise 1-10.  Write a program to copy its input to its output, replacing
/// each tab by \t, each backspace by \b, and each backslash by \\.  This makes
/// tabs and backspaces visible in an unambiguous way.
///
/// NOTE: This porgram does not succeed in printing \b for backspace output.
/// It wont work for most terminals which are in "cooked tty mode" by default. 
/// The backspace is consumed by the tty deriver before it gets to the program.
///
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

main()
{
    int c;
    int charFound; // Detect if a special char was found (tab, backspace, backslash)

    while ((c = getchar()) != EOF ) {

        charFound = 0; // Initialize flag for every iteration
        
        // Print the first blank detected
        if (c == '\t') {
            printf("\\t");
            charFound = 1;
        }
        if (c == '\b') {
            printf("\\b");
            charFound = 1;
        }
        if (c == '\\') {
            printf("\\\\");
            charFound = 1;
        }

        // Only print if the flag was set not set to 1 (special char found)
        if (charFound != 1)
            putchar(c);
        
        charFound = 0; // reset flag
    }
}

////////////////////////////////////////////////////////////////////////////////
///
/// Output:
///
///     >ex1-10.exe
///     abcd            efgh\\ij
///     abcd\t\tefgh\\\\ij
///     
////////////////////////////////////////////////////////////////////////////////
