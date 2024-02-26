#include <iostream>
#include <cassert>
#include <string>

class Solution
{
public:
    bool isPalindrome(int x)
    {
        std::string str = std::to_string(x);
        std::string strRevers = str;
        std::reverse(strRevers.begin(), strRevers.end());

        return str == strRevers;
    }
};

void testsPalindrome()
{
    Solution solution;
    assert(solution.isPalindrome(121) == true);
    assert(solution.isPalindrome(-121) == false);
    assert(solution.isPalindrome(10) == false);

    std::cout << "Accepted" << std::endl;
}

// int main()
// {
//     testsPalindrome();
//     std::cin.get();
//
//     return 0;
// }