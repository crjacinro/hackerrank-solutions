#include <bits/stdc++.h>

using namespace std;

vector<int> breakingRecords(vector<int> scores)
{
    int max = scores.front();
    int min = scores.front();
    vector<int> result;

    int maxBreaks = 0;
    int minBreaks = 0;

    for (auto score : scores)
    {
        if (score > max)
        {
            maxBreaks++;
            max = score;
            continue;
        }

        if (score < min)
        {
            minBreaks++;
            min = score;
            continue;
        }
    }

    result = {maxBreaks,
              minBreaks};

    return result;
}

bool test_case_1()
{
    vector<int> scores = {3, 4, 21, 36, 10, 28, 35, 5, 24, 42};

    vector<int> expected = {4, 0};

    vector<int> result = breakingRecords(scores);

    cout << "Result: ";
    for (auto i : result)
        cout << i << ' ';
    cout << endl;

    cout << "Expected: ";
    for (auto i : expected)
        cout << i << ' ';
    cout << endl;

    return result == expected;
}

bool test_case_2()
{
    return true;
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