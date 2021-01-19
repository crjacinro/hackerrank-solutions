#include "SolutionHeader.h"

bool testCase1()
{
    string input = "UDDDUDUU";
    int expected = 1;

    int result = countingValleys(input.size(), input);

    cout << "Result: " << result << endl;
    cout << "Expected: " << expected << endl;

    return result == expected;
}

bool testCase2()
{
    string input = "DDUUDDUDUUUD";
    int expected = 2;

    int result = countingValleys(input.size(), input);

    cout << "Result: " << result << endl;
    cout << "Expected: " << expected << endl;

    return result == expected;
}