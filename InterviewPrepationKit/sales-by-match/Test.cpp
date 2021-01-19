#include "SolutionHeader.h"

bool testCase1()
{
    vector<int> socks = {10, 20, 20, 10, 10, 30, 50, 10, 20};
    int expected = 3;

    int result = sockMerchant(socks.size(), socks);

    cout << "Result: " << result << endl;
    cout << "Expected: " << expected << endl;

    return result == expected;
}

bool testCase2()
{
    return true;
}