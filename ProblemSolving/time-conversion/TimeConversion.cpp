#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s)
{
    string hh = s.substr(0, 2);
    string mm = s.substr(3, 2);
    string ss = s.substr(6, 2);
    string format = s.substr(8, 2);
    string hh_12 = "";
    if (format.compare("PM") == 0)
    {
        int hh_int = stoi(hh) + 12;
        if (hh_int == 24)
        {
            hh_int = 12;
        }

        stringstream resultfmt;
        resultfmt << setfill('0') << setw(2) << hh_int;
        hh_12 = resultfmt.str();
    }
    else if (hh.compare("12") == 0)
    {
        hh_12 = "00";
    }
    else
    {
        hh_12 = hh;
    }

    stringstream fmt;
    fmt << hh_12 << ":" << mm << ":" << ss;

    return fmt.str();
}

bool test_case_1()
{
    string input = "07:05:45PM";
    string expected = "19:05:45";

    string result = timeConversion(input);

    cout << "Result: " << result << endl;
    cout << "Expected: " << expected << endl;

    return result.compare(expected) == 0;
}

bool test_case_2()
{
    string input = "07:05:45AM";
    string expected = "07:05:45";

    string result = timeConversion(input);

    cout << "Result: " << result << endl;
    cout << "Expected: " << expected << endl;

    return result.compare(expected) == 0;
}

bool test_case_3()
{
    string input = "12:01:00AM";
    string expected = "00:01:00";

    string result = timeConversion(input);

    cout << "Result: " << result << endl;
    cout << "Expected: " << expected << endl;

    return result.compare(expected) == 0;
}

void runTestCases()
{
    // TODO pass as lambda function
    if (test_case_1())
    {
        cout << "Test Case 1:  PASS\n\n";
    }
    else
    {
        cout << "Test Case 1:  FAIL\n\n";
    }

    if (test_case_2())
    {
        cout << "Test Case 2:  PASS\n\n";
    }
    else
    {
        cout << "Test Case 2:  FAIL\n\n";
    }
    if (test_case_3())
    {
        cout << "Test Case 2:  PASS\n\n";
    }
    else
    {
        cout << "Test Case 2:  FAIL\n\n";
    }
}

void exitApp()
{
    cout << "\n\nPress Enter to Exit...";
    cin.get();
}

int main()
{
    runTestCases();
    exitApp();
}