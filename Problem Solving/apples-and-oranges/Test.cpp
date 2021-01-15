#include "SolutionHeader.h"

bool testCase1()
{
    vector<int> apples = {-2, 2, 1};
    vector<int> oranges = {5, -6};
    int s = 7;
    int t = 11;
    int a = 5;
    int b = 15;

    string expected = "1 1";

    string result = countApplesAndOranges(s, t, a, b, apples, oranges);

    cout << "Result: ";
    for (auto i : result)
        cout << i << ' ';
    cout << endl;

    cout << "Expected: ";
    for (auto i : expected)
        cout << i << ' ';
    cout << endl;

    return result.compare(expected) == 0;
}

bool testCase2()
{
    return true;
}