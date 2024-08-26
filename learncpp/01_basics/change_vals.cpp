// My test program to change a value of a variable based on user input.

#include <iostream>

int printVals(int x, int y)
{
    std::cout << "x: " << x << "\ny: " << y << '\n';
    return 0;
}

int main()
{
    int x {};
    int y {};

    printVals(x, y);

    std::cout << "Enter value for x, and y respectively.\n";
    std::cin >> x >> y;

    printVals(x, y);

    std::cout << "Enter value for x, and y respectively.\n";
    std::cin >> x >> y;

    printVals(x, y);

    return 0;
}