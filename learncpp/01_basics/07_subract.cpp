// First Program
// Take two numbers from user input, subtract the second from the first, then 
// print output to console.

#include <iostream>

int main()
{
    int i1 {};
    int i2 {};

    std::cout << "Enter an integer: ";
    std::cin >> i1;
    std::cout << "Enter a second integer: ";
    std::cin >> i2;

    std::cout << i1 << " - " << i2 << " = " << i1 - i2 << '\n';

    return 0;
}