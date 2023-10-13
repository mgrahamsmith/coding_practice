////////////////////////////////////////////////////////////////////////////////
/// 
/// Exercise 1-4.  Write a program to print the corresponding Celsius to 
/// Fahrenheit table.
/// 
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

// print Fahrenheit-Celcius table for fahr = 0, 20, ..., 300;
// floating point version
main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;     // lower limit of temperature table
    upper = 300;   // upper limit
    step = 20;     // step size

    celsius = lower;
    printf("|---------|------------|\n");
    printf("| Celsius | Fahrenheit |\n");
    printf("|---------|------------|\n"); // | 12 | 9 | table widths
    while (celsius <= upper) {
        fahr = (9.0/5.0)*celsius + 32.0;
        printf("| %7.0f | %10.1f |\n", celsius, fahr); // -2 for table widths
        celsius = celsius + step;
    }
    printf("|---------|------------|\n");
}

////////////////////////////////////////////////////////////////////////////////
/// 
/// Output:
/// 
///     >ex1-4.exe
///     |---------|------------|
///     | Celsius | Fahrenheit |
///     |---------|------------|
///     |       0 |       32.0 |
///     |      20 |       68.0 |
///     |      40 |      104.0 |
///     |      60 |      140.0 |
///     |      80 |      176.0 |
///     |     100 |      212.0 |
///     |     120 |      248.0 |
///     |     140 |      284.0 |
///     |     160 |      320.0 |
///     |     180 |      356.0 |
///     |     200 |      392.0 |
///     |     220 |      428.0 |
///     |     240 |      464.0 |
///     |     260 |      500.0 |
///     |     280 |      536.0 |
///     |     300 |      572.0 |
///     |---------|------------|
/// 
////////////////////////////////////////////////////////////////////////////////
