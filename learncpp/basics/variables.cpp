#include <iostream>

int main()
{

    int width { 5 }; // define a variable width, and initialize with initial value of 5

    std::cout << width << "\n"; // print 5

    width = 7;

    std::cout << width << "\n"; // print 7

    int a;          // no initializer (default initialization)      
    int b = 5;      // initial value after equals sign (copy initialization)
    int c( 6 );     // initial value in parenthesis (direct initialization)

    // List initialization methods (C++11) (preferred)
    int d { 7 };    // initial value in braces (direct list initialization)
    int e = { 8 };  // initial value in braces after equals sign (copy list initialization)
    int f {};       // initializer is empty braces (value initialization)

    a = 1; // Initialize to avoid warning when printing a
    std::cout << "a: " << a << "\n";
    std::cout << "b: " << b << "\n";
    std::cout << "c: " << c << "\n";
    std::cout << "d: " << d << "\n";
    std::cout << "e: " << e << "\n";
    std::cout << "f: " << f << "\n";

    return 0;
}