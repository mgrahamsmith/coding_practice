#include <iostream> // for std::endl and std::cout

int main()
{

    std::cout << 4 << '\n'; // print 4 to console

    int x{ 5 }; // define integer variable x, initialized with value 5
    std::cout << x << '\n'; // print value of x (5) to console

    std::cout << "Hello" << " world!" << '\n'; // '\n' single quoted (by itself) (conventional)
    std::cout << "Hello" << " world!" << "\n"; // "\n" double quoted (by itself) (unconventional but okay)
    std::cout << "Hello world!\n"; // between double quotes in existing text (conventional)

    int y{ 6 };
    // std::endl will cause the cursor to move to the next line and flush the buffer
    std::cout << "y is equal to: " << y << std::endl;

    // "\n" is fine and even preferred in standard output statments.
    // Prefer single quotes in non output cases.
    // Prefer \n over std::endl when outputting text to the console.

    // std::cout << '/n'; // forward slash will cause unexpected behavior

    return 0;
}