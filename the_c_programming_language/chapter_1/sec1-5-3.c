////////////////////////////////////////////////////////////////////////////////
///
/// Section 1.5.3  Line Counting
///
/// The next program counts input lines. ... the standard library ensures that
/// an input text stream appears as a sequence of lines, each terminated by a
/// newline.  Hence, counting lines is just counting newlines.
///
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

// count lines in input
main()
{
    int c, nl;

    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;

    printf("%d\n", nl);
}


////////////////////////////////////////////////////////////////////////////////
///
/// Output:
///
///     >.\sec1-5-3.exe
///     asdfhalskdfha
///     sdfa
///     sdf
///     asdfasldfhlehfasdf
///     adsf
///     a
///     sdf
///     asdf7
///     
////////////////////////////////////////////////////////////////////////////////
