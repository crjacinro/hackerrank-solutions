#include <bits/stdc++.h>

using namespace std;

bool isInHouseRange(int d)
{
}

string countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges)
{
    int appleCounter = 0;
    int orangeCounter = 0;

    for (auto apple : apples)
    {
        int position = a + apple;
        if (position >= s && position <= t)
        {
            appleCounter++;
        }
    }

    for (auto orange : oranges)
    {
        int position = b + orange;
        if (position >= s && position <= t)
        {
            orangeCounter++;
        }
    }
    stringstream fmt;
    fmt << appleCounter << " " << orangeCounter;
    return fmt.str();
}

bool test_case_1()
{
    vector<int> apples = {-2, 2, 1};
    vector<int> oranges = {5, -6};
    int s = 7;
    int t = 11;
    int a = 5;
    int b = 15;

    string expected = "1 1";

    string result = countApplesAndOranges(s, t, a, b, apples, oranges);

    cout << "Result: ";
    for (auto i : result)
        cout << i << ' ';
    cout << endl;

    cout << "Expected: ";
    for (auto i : expected)
        cout << i << ' ';
    cout << endl;

    return result.compare(expected) == 0;
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