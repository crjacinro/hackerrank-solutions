#include "SolutionHeader.h"

bool testCase1()
{
    vector<int> arr = {73, 67, 38, 33};
    vector<int> expected = {75, 67, 40, 33};

    vector<int> result = gradingStudents(arr);

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
