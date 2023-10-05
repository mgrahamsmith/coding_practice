/* Exercise 1-6.  Verify that the expression getchar() != EOF is 0 or 1. */

#include <stdio.h>

main()
{
    int c;

    printf("getchar() != EOF: %d\n", getchar() != EOF);
}

/* Output:
>ex1-6.exe
d
getchar() != EOF: 1

>ex1-6.exe
2345
getchar() != EOF: 1

>ex1-6.exe
EOF
getchar() != EOF: 1

>ex1-6.exe
asdasdf
getchar() != EOF: 1

>ex1-6.exe
getchar() != EOF: 0     // Result of terminating program with Ctrl-C

*/
