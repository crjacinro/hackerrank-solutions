#include <bits/stdc++.h>

using namespace std;

int birthday(vector<int> s, int d, int m)
{
    int current = 0;
    int result = 0;

    while (current + m <= s.size())
    {
        int count = 0;
        int sum = 0;
        int innercurrent = current;
        while (count < m)
        {
            sum += s[innercurrent];
            count++;
            innercurrent++;
        }
        if (sum == d)
        {
            result++;
        }
        current++;
    }

    return result;
}

bool test_case_1()
{
    vector<int> bar = {1, 2, 1, 3, 2};
    int d = 3;
    int m = 2;
    int expected = 2;

    int result = birthday(bar, d, m);

    cout << "Result: " << result << endl;
    cout << "Expected: " << expected << endl;

    return result == expected;
}

bool test_case_2()
{
    vector<int> bar = {1, 1, 1, 1, 1, 1};
    int d = 3;
    int m = 2;
    int expected = 0;

    int result = birthday(bar, d, m);

    cout << "Result: " << result << endl;
    cout << "Expected: " << expected << endl;

    return result == expected;
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