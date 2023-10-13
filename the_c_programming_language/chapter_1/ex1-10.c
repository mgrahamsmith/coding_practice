////////////////////////////////////////////////////////////////////////////////
///
/// Exercise 1-10.  Write a program to copy its input to its output, replacing
/// each tab by \t, each backspace by \b, and each backslash by \\.  This makes
/// tabs and backspaces visible in an unambiguous way.
///
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

main()
{
    int c;

    while ((c = getchar()) != EOF ) {
        if(c == '\b')
            printf("BACKSPACE DETECTED.\n");
        putchar(c);
    }

//     while ((c = getchar()) != EOF ) {
//         
//         // Print the first blank detected
//         if (c == '\t')
//             putchar('\\t');
//         if (c == '\b') {
//             putchar('\\b');
//         if (c == '\\')
//             putchar('\\\\');
//         
//         putchar(c);
//     }
}

////////////////////////////////////////////////////////////////////////////////
///
/// Output:
///
/// 
///     
////////////////////////////////////////////////////////////////////////////////
