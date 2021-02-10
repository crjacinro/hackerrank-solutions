#include "SolutionHeader.h"

bool testCase1()
{
    vector<long> q = {1, 2, 2, 4};
    int r = 2;
    long expected = 2;

    long result = countTriplets(q, r);

    cout << "Result: " << result << endl;
    cout << "Expected: " << expected << endl;

    return result == expected;
}

bool testCase2()
{
    vector<long> q = {1, 3, 9, 9, 27, 81};
    int r = 3;
    long expected = 6;

    long result = countTriplets(q, r);

    cout << "Result: " << result << endl;
    cout << "Expected: " << expected << endl;

    return result == expected;
}

bool testCase3()
{
    vector<long> q = {1, 1, 1};
    int r = 1;
    long expected = 1;

    long result = countTriplets(q, r);

    cout << "Result: " << result << endl;
    cout << "Expected: " << expected << endl;

    return result == expected;
}