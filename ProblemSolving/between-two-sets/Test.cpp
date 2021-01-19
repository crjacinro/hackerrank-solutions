#include "SolutionHeader.h"

bool testCase1()
{
    vector<int> a = {2, 6};
    vector<int> b = {24, 36};
    int expected = 2;

    int result = getTotalX(a, b);

    cout << "Result: " << result << endl;
    cout << "Expected: " << expected << endl;

    return result == expected;
}

bool testCase2()
{
    vector<int> a = {2, 4};
    vector<int> b = {16, 32, 96};
    int expected = 3;

    int result = getTotalX(a, b);

    cout << "Result: " << result << endl;
    cout << "Expected: " << expected << endl;

    return result == expected;
}