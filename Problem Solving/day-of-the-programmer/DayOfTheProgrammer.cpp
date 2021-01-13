#include <bits/stdc++.h>

using namespace std;

string dayOfProgrammer(int year)
{
    string result;
    vector<int> non_leap_map = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<int> leap_map = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<int> julian = {31, 16, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int monthResult = 0;
    int daysResult = 0;

    string monthDisplay = "";
    string daysDisplay = "";
    string yearDisplay = "";

    if (year == 1918) // transition
    {
        int count = 0;
        for (int i = 0; i < julian.size(); i++)
        {
            count += julian[i];

            if (count < 256)
                continue;

            if (count > 256)
            {
                monthResult = i + 1;
                daysResult = 256 - (count - julian[i]) + 1;

                break;
            }
        }
    }

    else if (year < 1919) // julian
    {
        if (year % 4 == 0)
        {
            int count = 0;
            for (int i = 0; i < leap_map.size(); i++)
            {
                count += leap_map[i];

                if (count < 256)
                    continue;

                if (count > 256)
                {
                    monthResult = i + 1;
                    daysResult = 256 - (count - leap_map[i]);

                    break;
                }
            }
        }
        else
        {
            int count = 0;
            for (int i = 0; i < non_leap_map.size(); i++)
            {
                count += non_leap_map[i];

                if (count < 256)
                    continue;

                if (count > 256)
                {
                    monthResult = i + 1;
                    daysResult = 256 - (count - non_leap_map[i]);

                    break;
                }
            }
        }
    }
    else // gregorian
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            int count = 0;
            for (int i = 0; i < leap_map.size(); i++)
            {
                count += leap_map[i];

                if (count < 256)
                    continue;

                if (count > 256)
                {
                    monthResult = i + 1;
                    daysResult = 256 - (count - leap_map[i]);

                    break;
                }
            }
        }
        else
        {
            int count = 0;
            for (int i = 0; i < non_leap_map.size(); i++)
            {
                count += non_leap_map[i];

                if (count < 256)
                    continue;

                if (count > 256)
                {
                    monthResult = i + 1;
                    daysResult = 256 - (count - non_leap_map[i]);

                    break;
                }
            }
        }
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