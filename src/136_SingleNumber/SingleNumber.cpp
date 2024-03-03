#include <iostream>
#include <vector>

class Solution
{
public:
    int singleNumber(std::vector<int>& nums)
    {
        int result{0};

        for (const auto n : nums)
        {
        }
    }
};

template <typename T>
class Test1
{
public:
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

    std::cout << "Accepted" << std::endl;
}

int main()
{
    testsSingleNumber();
    std::cin.get();

    return 0;
}