#include <iostream>
#include <vector>

int main()
{
    std::cout << "Question #4: Using a std::vector, write a program that asks"
        << " the user to enter 3 integral values. Print the sum and product"
        << " of those values.\n\n";

    std::vector<int> in_vals(3);
    std::cout << "Enter 3 integers: ";

    std::cin >> in_vals[0] >> in_vals[1] >> in_vals[2];

    std::cout << "The sum is: " << in_vals[0] + in_vals[1] + in_vals[2] << '\n';
    std::cout << "The product is: " << in_vals[0] * in_vals[1] * in_vals[2]
        << '\n';
    
    return 0;
}