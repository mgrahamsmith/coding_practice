////////////////////////////////////////////////////////////////////////////////
///
/// Exercise 1-9.  Write a program to copy its input to its output, replacing
/// each string of one or more blanks by a single blank.
///
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

main()
{
    int c;

    while ((c = getchar()) != EOF ) {

        // Print the first blank detected
        if (c == ' ')
            putchar(c);

        // Skip all immediately following blanks
        while (c == ' ')
            c = getchar();

        putchar(c);
    }
}

////////////////////////////////////////////////////////////////////////////////
///
/// Output:
///
///     >ex1-9.exe
///     asdfasdf      a sdf               adfdf f f f f
///     asdfasdf a sdf adfdf f f f f
///     
///     >ex1-9.exe
///     a  s    d      f dfgsdfg                             sdfggg   g e    d
///     a s d f dfgsdfg sdfggg g e d
///     
////////////////////////////////////////////////////////////////////////////////
