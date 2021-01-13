#include <bits/stdc++.h>

using namespace std;

pair<int, int> compute(vector<int> map)
{
    int count = 0;
    for (int i = 0; i < map.size(); i++)
    {
        count += map[i];

        if (count > 256)
        {
            int month = i + 1;
            int days = 256 - (count - map[i]);

            return make_pair(month, days);
        }
        else
        {
            continue;
        }
    }

    return {0, 0};
}

bool isLeapYear(int year)
{
    if (year < 1919)
    {
        if (year % 4 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

string dayOfProgrammer(int year)
{
    string result;
    vector<int> non_leap_map = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<int> leap_map = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<int> julian = {31, 15, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int monthResult = 0;
    int daysResult = 0;

    string monthDisplay = "";
    string daysDisplay = "";
    string yearDisplay = "";

    if (year == 1918) // transition
    {
        auto resultPair = compute(julian);
        monthResult = resultPair.first;
        daysResult = resultPair.second;
    }

    else if (isLeapYear(year))
    {
        auto resultPair = compute(leap_map);
        monthResult = resultPair.first;
        daysResult = resultPair.second;
    }
    else
    {
        auto resultPair = compute(non_leap_map);
        monthResult = resultPair.first;
        daysResult = resultPair.second;
    }

    stringstream monthfmt;
    monthfmt << setfill('0') << setw(2) << monthResult;
    monthDisplay = monthfmt.str();

    stringstream daysfmt;
    daysfmt << setfill('0') << setw(2) << daysResult;
    daysDisplay = daysfmt.str();

    yearDisplay = to_string(year);

    stringstream resultfmt;
    resultfmt << daysDisplay << "." << monthDisplay << "." << yearDisplay;

    return resultfmt.str();
}

bool test_case_1()
{
    int y = 2017;
    string expected = "13.09.2017";

    string result = dayOfProgrammer(y);

    cout << "Result: " << result << endl;
    cout << "Expected: " << expected << endl;

    return result.compare(expected) == 0;
}

bool test_case_2()
{
    int y = 2016;
    string expected = "12.09.2016";

    string result = dayOfProgrammer(y);

    cout << "Result: " << result << endl;
    cout << "Expected: " << expected << endl;

    return result.compare(expected) == 0;
}

bool test_case_3()
{
    int y = 1918;
    string expected = "26.09.1918";

    string result = dayOfProgrammer(y);

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