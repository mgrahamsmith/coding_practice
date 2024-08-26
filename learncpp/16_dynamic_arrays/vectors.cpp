#include <iostream>
#include <vector>

int print_array(std::vector<int>& nums);

int main()
{
    std::cout << "Question 1:  Define a std::vector using CTAD and initialize"
        << "with the first 5 positive square numbers (1, 4, 9, 16, and 25).\n";

    std::vector squares { 1, 4, 9, 15, 25 };
    std::cout << "nums:\n";
    print_array(squares);
    
    return 0;
}

// Print array contents
int print_array(std::vector<int>& nums)
{
    std::cout << "size = " << nums.size() << "\n";
    std::cout << "{ " << nums[0];
    for (long unsigned int i = 1; i < nums.size(); i++)
    {
        std::cout << ", " << nums[i];
    };
    std::cout << " }\n";

    return 0;
}