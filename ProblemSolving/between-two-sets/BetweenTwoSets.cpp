#include <bits/stdc++.h>

using namespace std;

int getTotalX(vector<int> a, vector<int> b)
{
    int start = a.back();
    int end = b.back();
    int result = 0;

    while (start <= end)
    {
        bool goodForA = true;
        bool goodForB = true;

        for (auto x : a)
        {
            if (start % x != 0)
            {
                goodForA = false;
            }
        }

        if (goodForA)
        {
            for (auto x : b)
            {
                if (x % start != 0)
                {
                    goodForB = false;
                }
            }
        }

        if (goodForA && goodForB)
        {
            result++;
        }
        start++;
    }

    return result;
}

bool test_case_1()
{
    vector<int> a = {2, 6};
    vector<int> b = {24, 36};
    int expected = 2;

    int result = getTotalX(a, b);

    cout << "Result: " << result << endl;
    cout << "Expected: " << expected << endl;

    return result == expected;
}

bool test_case_2()
{
    vector<int> a = {2, 4};
    vector<int> b = {16, 32, 96};
    int expected = 3;

    int result = getTotalX(a, b);

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