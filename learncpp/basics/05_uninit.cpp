#include <iostream>

// trick compiler to think variable is used.
void doNothing(int&)
{
}

int main()
{
    int x;
    doNothing(x); // trick compiler to think variable is used.

    // Test undefined behavior (x is uninitialized)
    std::cout << "x: " << x << '\n';

    // Test implementation-defined behavior
    std::cout << sizeof(int) << '\n'; // print how many bytes of memory an int value takes

    // Test whitespace treatment
    std::cout << "Hello "             " world "
        " this is on the next line in the code " "\n"; // '\n' doesn't work here, compile error

    // Useless expression statement.  See if compiler throws error.
    // error: statement has no effect [-Werror=unused-value]
    3 * 6;
    
    return 0;
}