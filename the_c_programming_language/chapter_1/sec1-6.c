////////////////////////////////////////////////////////////////////////////////
///
/// Section 1.6  Arrays
///
/// This program counts the numbers of occurences of each digit, of white space
/// characters (blank, tab, newline), and of all other characters.
///
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

// count digits, whitespace others
main()
{
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;

    while ((c = getchar()) != EOF)
        if (c >= '0' && c <= '9')
            ++ndigit[c-'0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;
    
    printf("digits =");
    for (i = 0; i < 10; ++i)
        printf(" %d", ndigit[i]);
    printf(", white space = %d, other = %d\n", nwhite, nother);
}

////////////////////////////////////////////////////////////////////////////////
///
/// Output:
///
///     >sec1-6.exe
///     0 1 2 3 4 5 6 7 8 9
///     ^Z
///     digits = 1 1 1 1 1 1 1 1 1 1, white space = 10, other = 0
///     
///     >sec1-6.exe
///     3192734123   asdjfhasldjhasd  83038             asdfasldfasjdf
///     ^Z
///     digits = 1 2 2 5 1 0 0 1 2 1, white space = 8, other = 29
///
////////////////////////////////////////////////////////////////////////////////
