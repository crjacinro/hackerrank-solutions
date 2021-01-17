#include "SolutionHeader.h"

bool testCase1()
{
    vector<int> arr = {1, 1, 1, 2, 2, 3};
    int expected = 1;

    int result = migratoryBirds(arr);

    cout << "Result: " << result << endl;
    cout << "Expected: " << expected << endl;

    return result == expected;
}

bool testCase2()
{
    return true;
}
