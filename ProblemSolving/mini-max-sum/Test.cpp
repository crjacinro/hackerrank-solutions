#include "SolutionHeader.h"

bool testCase1()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    string expected = "10 14";

    string result = miniMaxSum(arr);

    cout << "Result: " << result << endl;
    cout << "Expected: " << expected << endl;

    return result.compare(expected) == 0;
}

bool testCase2()
{
    vector<int> arr = {1, 3, 5, 7, 9};

    string expected = "16 24";

    string result = miniMaxSum(arr);

    cout << "Result: " << result << endl;
    cout << "Expected: " << expected << endl;

    return result.compare(expected) == 0;
}
