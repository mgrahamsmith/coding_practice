#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target)
    {
        size_t length = nums.size();
        int firstVal = 0;
        int secondVal = 0;
        for (size_t i { 0 }; i < length; ++i )
        {
            for (size_t j { 0 }; j < length; ++j)
            {
                if (nums[i] + nums[j] == target && i != j)
                {
                    firstVal = static_cast<int>(i);
                    secondVal = static_cast<int>(j);
                    break;
                }
            }
        }

        return std::vector<int> { secondVal, firstVal };
    }
};

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


int main()
{
    Solution solution {};

    std::cout << "Two Sum Program\n---------------\n";
    std::vector<int> nums;
    int target;
    std::vector<int> result(2);

    std::cout << "Example 1\n";
    std::cout << "Input: num = [2,7,11,15] , target = 9\n";

    nums = { 2, 7, 11, 15 };
    target = 9;
    result = solution.twoSum(nums, target);
    print_array(result);

    std::cout << "Example 2\n";
    std::cout << "Input: nums = [3,2,4], target = 6\n";

    nums = { 3, 2, 4 };
    target = 6;
    result = solution.twoSum(nums, target);
    print_array(result);

    std::cout << "Example 3:\n";
    std::cout << "Input: nums = [3,3], target = 6\n";

    nums = { 3, 3 };
    target = 6;
    result = solution.twoSum(nums, target);
    print_array(result);
    
    return 0;
}