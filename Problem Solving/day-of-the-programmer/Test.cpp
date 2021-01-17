#include "SolutionHeader.h"

bool testCase1()
{
    int y = 2017;
    string expected = "13.09.2017";

    string result = dayOfProgrammer(y);

    cout << "Result: " << result << endl;
    cout << "Expected: " << expected << endl;

    return result.compare(expected) == 0;
}

bool testCase2()
{
    int y = 2016;
    string expected = "12.09.2016";

    string result = dayOfProgrammer(y);

    cout << "Result: " << result << endl;
    cout << "Expected: " << expected << endl;

    return result.compare(expected) == 0;
}

bool testCase3()
{
    int y = 1918;
    string expected = "26.09.1918";

    string result = dayOfProgrammer(y);

    cout << "Result: " << result << endl;
    cout << "Expected: " << expected << endl;

    return result.compare(expected) == 0;
}