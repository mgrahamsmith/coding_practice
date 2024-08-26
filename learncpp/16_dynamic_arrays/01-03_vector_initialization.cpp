#include <iostream>
#include <vector>

int print_array(std::vector<int>& nums);
int print_array(std::vector<double>& nums);

int main()
{
    std::cout << "Question 1:  Define a std::vector using CTAD and initialize with the first 5 positive square numbers"
        << " (1, 4, 9, 16, and 25).\n";

    std::vector squares { 1, 4, 9, 15, 25 };
    std::cout << "nums:\n";
    print_array(squares);

    std::cout << "Question #3: Define a std::vector (using an explicit template type argument) to hold the high"
        << " temperature (to the nearest tenth of a degree) for each day of a year (assume 365 days in a year).\n";

    std::vector<double> temps(365);
    std::cout << "temps:\n";
    print_array(temps);
    
    return 0;
}

// Print array contents (integers)
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

// Print array contents (doubles)
int print_array(std::vector<double>& nums)
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