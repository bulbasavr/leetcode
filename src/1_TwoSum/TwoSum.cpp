#include <iostream>
#include <cassert>
#include <vector>

class Solution
{
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target)
    {
        std::vector<int> result;

        for (size_t i = 0; i < nums.size() - 1; i++)
        {
            for (size_t j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    result.emplace_back(i);
                    result.emplace_back(j);

                    return result;
                };
            }
        }

        result.emplace_back(0);
        result.emplace_back(0);

        return result;
    }
};

void testsTwoSum()
{
    Solution solution;

    std::vector<int> testVector1{2, 7, 11, 15};
    std::vector<int> OutputTestVector1{0, 1};
    assert(solution.twoSum(testVector1, 9) == OutputTestVector1);

    std::vector<int> testVector2{3, 2, 4};
    std::vector<int> OutputTestVector2{1, 2};
    assert(solution.twoSum(testVector2, 6) == OutputTestVector2);

    std::vector<int> testVector3{3, 3};
    std::vector<int> OutputTestVector3{0, 1};
    assert(solution.twoSum(testVector3, 6) == OutputTestVector3);

    std::cout << "Accepted" << std::endl;
}

// int main()
// {
//     testsTwoSum();
//     std::cin.get();
//
//     return 0;
// }