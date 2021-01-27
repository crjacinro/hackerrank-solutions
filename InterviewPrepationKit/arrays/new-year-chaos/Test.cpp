#include "SolutionHeader.h"

bool testCase1()
{
    vector<int> q = {2, 5, 1, 3, 4};
    string expected = "Too chaotic";

    string result = minimumBribes(q);

    cout << "Result: " << result << endl;
    cout << "Expected: " << expected << endl;

    return result.compare(expected) == 0;

    return true;
}

bool testCase2()
{
    vector<int> q = {2, 1, 5, 3, 4};
    string expected = "3";

    string result = minimumBribes(q);

    cout << "Result: " << result << endl;
    cout << "Expected: " << expected << endl;

    return result.compare(expected) == 0;

    return true;
}

bool testCase3()
{
    vector<int> q = {1, 2, 5, 3, 7, 8, 6, 4};
    string expected = "7";

    string result = minimumBribes(q);

    cout << "Result: " << result << endl;
    cout << "Expected: " << expected << endl;

    return result.compare(expected) == 0;

    return true;
}