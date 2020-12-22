#include <bits/stdc++.h>

using namespace std;

int getNearestMultipleOfFive(int n)
{
    while (n % 5 != 0)
    {
        n++;
    }
    return n;
}

vector<int> gradingStudents(vector<int> grades)
{
    vector<int> result;

    for (int i = 0; i < grades.size(); i++)
    {
        int grade = grades[i];
        int nearestFive = getNearestMultipleOfFive(grade);

        if (grade < 38)
        {
            result.push_back(grade);
        }
        else if (nearestFive - grade < 3)
        {
            result.push_back(nearestFive);
        }
        else
        {
            result.push_back(grade);
        }
    }

    return result;
}

bool test_case_1()
{
    vector<int> arr = {73, 67, 38, 33};
    vector<int> expected = {75, 67, 40, 33};

    vector<int> result = gradingStudents(arr);

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