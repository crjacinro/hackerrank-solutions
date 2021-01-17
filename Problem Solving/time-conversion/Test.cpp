#include "SolutionHeader.h"

bool testCase1()
{
    string input = "07:05:45PM";
    string expected = "19:05:45";

    string result = timeConversion(input);

    cout << "Result: " << result << endl;
    cout << "Expected: " << expected << endl;

    return result.compare(expected) == 0;
}

bool testCase2()
{
    string input = "07:05:45AM";
    string expected = "07:05:45";

    string result = timeConversion(input);

    cout << "Result: " << result << endl;
    cout << "Expected: " << expected << endl;

    return result.compare(expected) == 0;
}

bool testCase3()
{
    string input = "12:01:00AM";
    string expected = "00:01:00";

    string result = timeConversion(input);

    cout << "Result: " << result << endl;
    cout << "Expected: " << expected << endl;

    return result.compare(expected) == 0;
}