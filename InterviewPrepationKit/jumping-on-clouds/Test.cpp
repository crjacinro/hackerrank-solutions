#include "SolutionHeader.h"

bool testCase1()
{
    vector<int> input = {0, 0, 1, 0, 0, 1, 0};
    int expected = 4;

    int result = jumpingOnClouds(input);

    cout << "Result: " << result << endl;
    cout << "Expected: " << expected << endl;

    return result == expected;
}

bool testCase2()
{
    vector<int> input = {0, 0, 0, 1, 0, 0};
    int expected = 3;

    int result = jumpingOnClouds(input);

    cout << "Result: " << result << endl;
    cout << "Expected: " << expected << endl;

    return result == expected;
}