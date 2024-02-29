#include <iostream>
#include <cassert>
#include <string>

class Solution
{
public:
    int strStr(std::string haystack, std::string needle) { return haystack.find(needle); }
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

void testsFindTheIndex()
{
    Solution solution;
    Test1<int> test;

    test.simpleTest(solution.strStr("sadbutsad", "sad"), 0);
    test.simpleTest(solution.strStr("leetcode", "leeto"), -1);

    std::cout << "Accepted" << std::endl;
}

// int main()
// {
//     testsFindTheIndex();
//     std::cin.get();
//
//     return 0;
// }