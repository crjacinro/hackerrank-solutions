#include "../SolutionHeader.h"

void runTestCases()
{
    if (testCase1())
    {
        cout << "Test Case 1:  PASS\n\n";
    }
    else
    {
        cout << "Test Case 1:  FAIL\n\n";
    }

    if (testCase2())
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