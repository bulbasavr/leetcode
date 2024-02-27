#include <iostream>
#include <cassert>
#include <string>
#include <unordered_map>

class Solution
{
public:
    int romanToInt(std::string s)
    {
        int result{0};
        int temp{0};

        std::unordered_map<char, int> roman = {        //
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},  //
            {'C', 100}, {'D', 500}, {'M', 1000}};

        for (int i = s.size() - 1; i > -1; i--)
        {
            if (roman[s[i]] < temp)
            {
                result -= roman[s[i]];
            }
            else
            {
                result += roman[s[i]];
            }

            temp = roman[s[i]];
        }

        return result;
    }
};

void testsRomanToInt()
{
    Solution solution;
    assert(solution.romanToInt("III") == 3);
    assert(solution.romanToInt("LVIII") == 58);
    assert(solution.romanToInt("MCMXCIV") == 1994);

    std::cout << "Accepted" << std::endl;
}

// int main()
// {
//     testsRomanToInt();
//     std::cin.get();
//
//     return 0;
// }