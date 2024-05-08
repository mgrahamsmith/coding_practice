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
    // print how many bytes of memory an int value takes
    std::cout << sizeof(int) << '\n';

    // Test whitespace treatment
    std::cout << "Hello "             " world "
        " this is on the next line in the code " "\n";
        // '\n' doesn't work here, compile error
    
    return 0;
}