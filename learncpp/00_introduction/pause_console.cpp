// Ensure the console pauses at the end of the program, rather than closing
// automatically.

#include <iostream>
#include <limits>

int main()
{
    std::cout << "Hello World!\n";

    std::cin.clear(); // reset any error flags
    // ignore any characters in the input buffer until we find a new line
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    std::cin.get(); // get one or more char from the user (waits for user to press enter)
    return 0;
}