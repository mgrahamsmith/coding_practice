#include <iostream>
#include <vector>

int print_array(std::vector<int>& nums);

int main()
{
    std::cout << "Two Sum Program\n---------------\n";

    std::vector<int> nums {2,7,11,1,24};
    std::cout << "nums:\n" << print_array(nums);
    
    return 0;
}

// Print array contents
int print_array(std::vector<int>& nums)
{
    std::cout << "size = " << nums.size() << "\n";
    std::cout << "[" << nums[0]; // Print first element
    for (long unsigned int i = 1; i < nums.size(); i++)
    {
        std::cout << ", " << nums[i];
    };
    std::cout << "]\n";

    return 0;
}