#include <iostream>
#include <vector>
#include <string>
#include <cassert>

class Solution
{
public:
    std::vector<int> plusOne(std::vector<int>& digits)
    {
        std::vector<int> result;

        for (const auto d : digits)
        {
            result.push_back(d);
        }

        int lastElement = result.size() - 1;

        if (lastElement < 9)
        {
            result[lastElement] += 1;
            return result;
        }

        for (int i = lastElement; i > 1; i--)
        {
            if (result[i] - 1 == 9)
            {
                result[i] = 0;
            }
            else
            {
                result[i] = 1;
                continue;
            }
        }

        result.push_back(0);

        return result;
    }
};

template <typename T>
class Test
{
public:
    std::vector<T> input;
    std::vector<T> expected;

    void printVector(const std::vector<T>& vec)
    {
        for (const auto v : vec)
        {
            std::cout << v << " ";
        }
    }

    void testInfo(const std::vector<T>& output, const std::vector<T>& expected)
    {
        if (output == expected)
        {
            std::cout << "[+] Output: ";
            printVector(output);
            std::cout << "\tExpected: ";
            printVector(expected);
            std::cout << std::endl;
            return;
        }

        std::cout << "[-] Output: ";
        printVector(output);
        std::cout << "\tExpected: ";
        printVector(expected);
        std::cout << std::endl;
    }

    void simpleTest(const std::vector<T>& output, const std::vector<T>& expected)
    {
        testInfo(output, expected);
        assert(output == expected);
    }
};

void testsPlusOne()
{
    Solution solution;
    Test<int> test;

    test.input = {1, 2, 3};
    test.expected = {1, 2, 4};
    test.simpleTest(solution.plusOne(test.input), test.expected);

    test.input = {4, 3, 2, 1};
    test.expected = {4, 3, 2, 2};
    test.simpleTest(solution.plusOne(test.input), test.expected);

    test.input = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    test.expected = {9, 8, 7, 6, 5, 4, 3, 2, 1, 1};
    test.simpleTest(solution.plusOne(test.input), test.expected);

    test.input = {9, 9};
    test.expected = {1, 0, 0};
    test.simpleTest(solution.plusOne(test.input), test.expected);

    test.input = {7, 2, 8, 5, 0, 9, 1, 2, 9, 5, 3, 6, 6, 7, 3, 2, 8, 4, 3, 7, 9, 5, 7, 7, 4, 7, 4, 9, 4, 7, 0, 1, 1, 1, 7, 4, 0, 0, 6};
    test.expected = {7, 2, 8, 5, 0, 9, 1, 2, 9, 5, 3, 6, 6, 7, 3, 2, 8, 4, 3, 7, 9, 5, 7, 7, 4, 7, 4, 9, 4, 7, 0, 1, 1, 1, 7, 4, 0, 0, 7};
    test.simpleTest(solution.plusOne(test.input), test.expected);

    std::cout << "Accepted" << std::endl;
}

int main()
{
    testsPlusOne();
    std::cin.get();

    return 0;
}