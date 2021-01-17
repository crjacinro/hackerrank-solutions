#include "SolutionHeader.h"

bool testCase1()
{
    vector<int> bar = {1, 2, 1, 3, 2};
    int d = 3;
    int m = 2;
    int expected = 2;

    int result = birthday(bar, d, m);

    cout << "Result: " << result << endl;
    cout << "Expected: " << expected << endl;

    return result == expected;
}

bool testCase2()
{
    vector<int> bar = {1, 1, 1, 1, 1, 1};
    int d = 3;
    int m = 2;
    int expected = 0;

    int result = birthday(bar, d, m);

    cout << "Result: " << result << endl;
    cout << "Expected: " << expected << endl;

    return result == expected;
}
