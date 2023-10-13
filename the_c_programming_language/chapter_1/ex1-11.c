////////////////////////////////////////////////////////////////////////////////
///
/// Exercise 1.11  How would you test the word count program?  What kinds of
/// input are most likely to uncover bugs if there are any?
///
/// Test extreme cases (no input, max input) and special characters.
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
///     >ex1-11.exe // Test 1
///     0 0 0
///
///     >ex1-11.exe
///     sdasdfasd               asdfasdalkjsdfl   asdlkfjad 3813948)(*&(*&^%&%$#&^%^^*()*& \n \n \t \\t
///     word1
///     word2 3756348
///     3 11 105
///
///     >ex1-11.exe
///     aaaa    aaaaa    aaaaa    aaaaa    aaaaa    aaaaa    aaaaa    aaaaa    aaaaa    aaaaa    aaaaa    a
///     aaaa    aaaaa    aaaaa    aaaaa    a
///     2 17 137
///
////////////////////////////////////////////////////////////////////////////////
