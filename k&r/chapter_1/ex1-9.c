// Exercise 1-9.  Write a program to copy its input to its output, replacing each
// string of one or more blanks by a single blank.

#include <stdio.h>

// copy input to output
main()
{
    int c;

    c = getchar();
    while (c != EOF ) {

        // If ' ' is encountered, keep reading input chars until non ' ' is found,
        // exiting the loop.
        while (c == ' ')
            c = getchar();

        putchar(c);
        c = getchar();
    }
}