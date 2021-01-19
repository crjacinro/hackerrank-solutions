#include <bits/stdc++.h>

using namespace std;

string miniMaxSum(vector<int> arr)
{
    int chosen = 0;
    int size = arr.size();
    long long int max = LLONG_MIN;
    long long int min = LLONG_MAX;

    for (int i = 0; i < size; i++)
    {
        chosen = i;
        long long int sum = 0;
        for (int j = 0; j < size; j++)
        {
            if (chosen == j)
                continue;

            sum += arr[j];
        }

        if (sum > max)
            max = sum;

        if (sum < min)
            min = sum;
    }

    stringstream fmt;

    fmt << min << " " << max;

    return fmt.str();
}

bool test_case_1()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    string expected = "10 14";

    string result = miniMaxSum(arr);

    cout << "Result: " << result << endl;
    cout << "Expected: " << expected << endl;

    return result.compare(expected) == 0;
}

bool test_case_2()
{
    vector<int> arr = {1, 3, 5, 7, 9};

    string expected = "16 24";

    string result = miniMaxSum(arr);

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