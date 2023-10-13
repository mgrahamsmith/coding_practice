////////////////////////////////////////////////////////////////////////////////
///
/// Exercise 1-8.  Write a program to count blanks, tabs, and newlines.
///
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

#include <stdio.h>

// count blanks, tabs, and newlines from input.
main()
{
    int c, nblank, ntab, nline;

    nblank = 0;
    ntab = 0;
    nline = 0;

    while ((c = getchar()) != EOF ) {
        if (c == ' ')
            ++nblank;
        if (c == '\t')
            ++ntab;
        if (c == '\n')
            ++nline;
    }

    printf("Blanks:   %d\nTabs:     %d\nNewlines: %d\n", nblank, ntab, nline);
}

////////////////////////////////////////////////////////////////////////////////
/// 
/// Output:
///
///     >ex1-8.exe
///     asdfasdf    asdfasdf                              asdfasdfasdfasd
///     
///     Blanks:   6
///     Tabs:     4
///     Newlines: 2
///     
///     >ex1-8.exe
///     a s d f g h q   w       e       r       h
///     j
///     u
///     i
///     Blanks:   6
///     Tabs:     4
///     Newlines: 4
///
////////////////////////////////////////////////////////////////////////////////
