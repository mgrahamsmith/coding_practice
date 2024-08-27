#include <iostream>
#include <vector>
#include <unordered_map>

int print_array(std::vector<int>& nums);
int print_map(std::unordered_map<int, size_t>& map);

class Solution {
public:

    // Hash Map Solution
    // Use STL unordered map to store key-value pairs of {target - nums[i], i} ...
    // While iterating through nums, if nums[i] is found (by key) in the map, return the corresponding unordered map 
    // value, which is the index of the element needed to add to nums[i] to match target.
    //
    // Example: [2,7,11,15]
    // unordered map: { 7, 0 } , { 2, 1 } , { -2, 2 } , { -7, 3 }
    // As soon as nums[1] with value 7 is found in the map at { 7, 0 }, this is the key corresponding to the index
    // in nums[0], such that nums[0] + nums[1] = target.
    // 
    // A false positive will exist when nums[i] and { target - nums[i], i} share the same index.  This is checked
    // and filtered out, since it is not a valid solution.

    std::vector<int> twoSum(std::vector<int>& nums, int target)
    {
        size_t length = nums.size();
        std::unordered_map<int, size_t> map {};

        // Populate unordered map with (target - nums[i]) as keys, and indices as values:
        // Example
        // { 
        //     {target - nums[0], 0},
        //     ... , 
        //     {target - nums[n-1], n-1} // n = array size
        // };

        // Insert first element without checking anything
        map.insert({target - nums[0], 0});
        for (size_t i{1}; i < length; ++i)
        {
            map.insert({target - nums[i], i});
            // See if nums[i] matches any keys in the map of { {target - nums[i], key}, ... } to identify element that
            // will add with nums[i] to equal target.
            if (auto search = map.find(nums[i]); search != map.end())
            {
                // Filter false positive of the same element being used twice (target / 2 = element will cause this)
                if (i != search->second)
                {
                    // Return the result, in this order since the 
                    // std::cout << "Found map {" << search->first << ", " << search->second << "}\n";
                    // std::cout << "  corresponds to nums[" << i << "] = " << nums[i] << '\n';
                    return { static_cast<int>(search->second), static_cast<int>(i) }; // result
                }
            }
        }

        return { -1, -1 }; // No solution found
    }
};

int main()
{
    Solution solution {};

    std::cout << "Two Sum Program\n---------------\n";
    std::vector<int> nums;
    int target;
    std::vector<int> result(2);

    std::cout << "Example 1:\n";
    std::cout << "Input: num = [2,7,11,15] , target = 9\n";

    nums = { 2, 7, 11, 15 };
    target = 9;
    result = solution.twoSum(nums, target);
    print_array(result);
    std::cout << '\n';

    std::cout << "Example 2:\n";
    std::cout << "Input: nums = [3,2,4], target = 6\n";

    nums = { 3, 2, 4 };
    target = 6;
    result = solution.twoSum(nums, target);
    print_array(result);
    std::cout << '\n';

    std::cout << "Example 3:\n";
    std::cout << "Input: nums = [3,3], target = 6\n";

    nums = { 3, 3 };
    target = 6;
    result = solution.twoSum(nums, target);
    print_array(result);
    std::cout << '\n';

    std::cout << "Example 4:\n";
    nums = { 3, 4, 3, 7, 12, 9 };
    target = 6;
    std::cout << "Input: nums = ";
    print_array(nums);
    std::cout << ", target = " << target << '\n';

    result = solution.twoSum(nums, target);
    print_array(result);
    std::cout << '\n';

    return 0;
}

// Print unordered map contents
int print_map(std::unordered_map<int, size_t>& map)
{
    std::cout << "Contents:\n";
    for (auto& p : map)
        std::cout << ' ' << p.first << " => " << p.second << '\n';

    return 0;
}

// Print array contents
int print_array(std::vector<int>& nums)
{
    std::cout << "[" << nums[0]; // Print first element
    for (size_t i = 1; i < nums.size(); i++)
    {
        std::cout << ", " << nums[i];
    };
    std::cout << "]";

    return 0;
}
