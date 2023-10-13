////////////////////////////////////////////////////////////////////////////////
///
/// Section 1.5.4  Word Counting
///
/// This program counts lines, words and characters, with the loose definition
/// that a word is any sequence of characters that does not contain a blank, tab
/// or newline.  This is a bare-bones version of the UNIX program wc.
///
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

#define IN  1   // inside a word
#define OUT 0   // outside a word

// count lines, words, and characters in input
main()
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);
}

////////////////////////////////////////////////////////////////////////////////
///
/// Output:
///
///     >sec1-5-4.exe
///     The quick brown fox jumps over the lazy dog                     hello world
///     1 11 59
///     
///     >sec1-5-4.exe
///     The quick brown fox jumps over the lazy dog
///     The quick brown fox jumps over the lazy dog
///     The quick brown fox jumps over the lazy dog
///     3 27 132
///
////////////////////////////////////////////////////////////////////////////////
