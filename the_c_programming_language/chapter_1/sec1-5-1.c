////////////////////////////////////////////////////////////////////////////////
///
/// Section 1.5.1  File Copying
///
/// A program that copies its inputs to its output one character at a time:
/// 
///     read a character
///     while (character is not end-of-file indicator)
///         output the character just read
///         read a character
///
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

// copy input to output; 1st version.
// main()
// {
//     int c;
// 
//     c = getchar();
//     while (c != EOF ) {
//         putchar(c);
//         c = getchar();
//     }
// }


// More compact version of the same program:

#include <stdio.h>

// copy input to output
main()
{
    int c;

    while ((c = getchar()) != EOF ) {
        putchar(c);
    }
}

////////////////////////////////////////////////////////////////////////////////
///
/// Output:
///     >sec1-5-1.exe
///     d
///     d
///     asdf
///     asdf
///     2345234527345'
///     2345234527345'
///     hello world
///     hello world
///
////////////////////////////////////////////////////////////////////////////////
