/* Section 1.5.1  File Copying
A program that copies its inputs to its output one character at a time:

    read a character
    while (character is not end-of-file indicator)
        output the character just read
        read a character
*/

#include <stdio.h>

/* copy input to output; 1st version */
main()
{
    int c;

    c = getchar();
    while (c != EOF ) {
        putchar(c);
        c = getchar();
    }
}

/* Output:
>sec1-5-1.exe
asdf
asdf
hello,world
hello,world
asdfasdfasdf
asdfasdfasdf
5
5
6
6
7
7
7asldfkjhalskdjfhalsdfjkh'
7asldfkjhalskdjfhalsdfjkh'
^C
*/
