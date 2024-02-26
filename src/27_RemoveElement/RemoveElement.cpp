#include <iostream>
#include <cassert>
#include <vector>

class Solution
{
public:
    int removeElement(std::vector<int>& nums, int val)
    {
        if (nums.empty()) return 0;

        for (int i = nums.size() - 1; i >= 0; i--)
        {
            if (nums[i] == val)
            {
                nums.erase(nums.begin() + i);
            }
        }

        return nums.size();
    }
};

void testsRemoveElement()
{
    Solution solution;

    std::vector<int> testVector1{3, 2, 2, 3};
    assert(solution.removeElement(testVector1, 2) == 2);

    std::vector<int> testVector2{0, 1, 2, 2, 3, 0, 4, 2};
    assert(solution.removeElement(testVector2, 2) == 5);

    std::cout << "Accepted" << std::endl;
}

int main()
{
    testsRemoveElement();
    return 0;
}