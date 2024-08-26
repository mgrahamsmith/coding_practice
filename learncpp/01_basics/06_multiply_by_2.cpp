// First Program
// Take number from user input, multiply by 2, then print output to console.

#include <iostream>

int main()
{

    std::cout << "Enter an integer: ";

    int num{ };
    std::cin >> num;

    std::cout << "Double that number is: " << 2 * num << '\n';
    std::cout << "Triple that number is: " << 3 * num << '\n';

    return 0;
}