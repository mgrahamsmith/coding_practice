////////////////////////////////////////////////////////////////////////////////
///
/// Exercise 1.12  Write a program that prints its input one word per line.
///
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

#define IN  1   // inside a word
#define OUT 0   // outside a word

// copy input to output, printing only one word per line.
main()
{
    int c, nc, state;

    nc = state = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            if (nc > 0)         // Don't print newline before first word
                putchar('\n');  // Reached end of word, print new line.
            ++nc;
        }
        if (state == IN) // Print while still inside a word
            putchar(c);
    }
    putchar('\n');  // Last newline for clean output
}

////////////////////////////////////////////////////////////////////////////////
///
/// Output:
///
///     >ex1-12.exe
///     word word               hello world     the quick brown fox 23452@#$%@#$%
///     word
///     word
///     hello
///     world
///     the
///     quick
///     brown
///     fox
///     23452@#$%@#$%
///
////////////////////////////////////////////////////////////////////////////////
