#include "SolutionHeader.h"

bool testCase1()
{
    string input = "aba";
    long n = 10;
    long expected = 7;

    long result = repeatedString(input, n);

    cout << "Result: " << result << endl;
    cout << "Expected: " << expected << endl;

    return result == expected;
}

bool testCase2()
{
    string input = "a";
    long n = 1000000000000;
    long expected = 1000000000000;

    long result = repeatedString(input, n);

    cout << "Result: " << result << endl;
    cout << "Expected: " << expected << endl;

    return result == expected;
}

bool testCase3()
{
    string input = "epsxyyflvrrrxzvnoenvpegvuonodjoxfwdmcvwctmekpsnamchznsoxaklzjgrqruyzavshfbmuhdwwmpbkwcuomqhiyvuztwvq";
    long n = 549382313570;
    long expected = 16481469408;

    long result = repeatedString(input, n);

    cout << "Result: " << result << endl;
    cout << "Expected: " << expected << endl;

    return result == expected;
}

bool testCase4()
{
    string input = "aab";
    long n = 882787;
    long expected = 588525;

    long result = repeatedString(input, n);

    cout << "Result: " << result << endl;
    cout << "Expected: " << expected << endl;

    return result == expected;
}