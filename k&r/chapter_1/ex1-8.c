/// 
/// Exercise 1-8.  Write a program to count blanks, tabs, and newlines.
/// 

#include <stdio.h>

// count characters in input; 1st version
main()
{
    long nc;

    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%1d\n", nc);
}

/// 
/// Output:
/// 
/// >ex1-8.exe
/// asdf
/// 5       // Exited with Ctrl-C
/// 
