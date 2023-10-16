////////////////////////////////////////////////////////////////////////////////
///
/// Exercise 1.13  Write a program to print a histogram of the lengths of words
/// in its input.  It is easy to draw the histogram with the bars horizontal;
/// a vertical orientation is more challenging.
///
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

#define IN  1   // inside a word
#define OUT 0   // outside a word

// count lines, words, and characters in input
// TODO: make it work.
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
///
////////////////////////////////////////////////////////////////////////////////
