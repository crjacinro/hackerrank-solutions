#include "SolutionHeader.h"

bool testCase1()
{
    vector<int> scores = {3, 4, 21, 36, 10, 28, 35, 5, 24, 42};

    vector<int> expected = {4, 0};

    vector<int> result = breakingRecords(scores);

    cout << "Result: ";
    for (auto i : result)
        cout << i << ' ';
    cout << endl;

    cout << "Expected: ";
    for (auto i : expected)
        cout << i << ' ';
    cout << endl;

    return result == expected;
}

bool testCase2()
{
    return true;
}