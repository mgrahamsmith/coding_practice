////////////////////////////////////////////////////////////////////////////////
///
/// Section 1.5.2  Character Counting
///
/// This program counts characters; it is similar to the copy program.
///
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

// count characters as input; 1st version
// main()
// {
//     long nc;
// 
//     nc = 0;
//     while (getchar() != EOF)
//         ++nc;
//     printf("%ld\n", nc);
// }

////////////////////////////////////////////////////////////////////////////////
/// Now use double precision float to store chars, and use for loop
////////////////////////////////////////////////////////////////////////////////

// count characters and input; 2nd version
main()
{
    double nc;

    for (nc = 0; getchar() != EOF; ++nc)
        ;                   // isolated semicolon: null statement, for-loop requires a body
    printf("%.0f\n", nc);   // %.0f suppress printing the decimal point and the fraction part, which is 0.
}


////////////////////////////////////////////////////////////////////////////////
///
/// Output:
///
///     >sec1-5-2.exe
///     asdfalksjfha
///     13
///     
///     >sec1-5-2.exe
///     asdfadsf
///     9           // 9 instead of the 8 chars shown due to newline character.
///
////////////////////////////////////////////////////////////////////////////////
