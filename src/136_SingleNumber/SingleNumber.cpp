#include <iostream>
#include <vector>
#include <cassert>

class Solution
{
public:
    int singleNumber(std::vector<int>& nums)
    {
        for (const auto n : nums)
        {
            if (std::count(nums.begin(), nums.end(), n) == 1) return n;
        }

        return 0;
    }
};

template <typename T>
class Test1
{
public:
    std::vector<T> input;
    T expected;

    void testInfo(T output, T expected)
    {
        if (output == expected)
        {
            std::cout << "[+] Output: " << output << "\tExpected: " << expected << std::endl;
            return;
        }

        std::cout << "[-] Output: " << output << "\tExpected: " << expected << std::endl;
    }

    void simpleTest(T output, T expected)
    {
        testInfo(output, expected);
        assert(output == expected);
    }
};

void testsSingleNumber()
{
    Solution solution;
    Test1<int> test;

    test.input = {2, 2, 1};
    test.expected = 1;
    test.simpleTest(solution.singleNumber(test.input), test.expected);

    test.input = {4, 1, 2, 1, 2};
    test.expected = 4;
    test.simpleTest(solution.singleNumber(test.input), test.expected);

    test.input = {1};
    test.expected = 1;
    test.simpleTest(solution.singleNumber(test.input), test.expected);

    std::cout << "Accepted" << std::endl;
}

// int main()
// {
//     testsSingleNumber();
//     std::cin.get();
//
//     return 0;
// }