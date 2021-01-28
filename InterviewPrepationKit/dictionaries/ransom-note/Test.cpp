#include "SolutionHeader.h"

bool testCase1()
{
    vector<string> q = {"two", "times", "three", "is", "not", "four"};
    vector<string> r = {"two", "times", "two", "is", "four"};
    string expected = "3";

    checkMagazine(q, r);

    // cout << "Result: " << result << endl;
    cout << "Expected: " << expected << endl;

    return true;
}

bool testCase2()
{
    // vector<string> q = {"two", "times", "three", "is", "not", "four"};
    // vector<string> r = {"two", "times", "two", "is", "four"};
    // string expected = "3";

    // checkMagazine(q, r);

    // //cout << "Result: " << result << endl;
    // cout << "Expected: " << expected << endl;

    return true;
}