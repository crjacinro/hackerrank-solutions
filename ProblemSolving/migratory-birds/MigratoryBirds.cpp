#include <bits/stdc++.h>

using namespace std;

int migratoryBirds(vector<int> arr)
{
    map<int, int> freqMap;
    for (auto a : arr)
    {
        if (freqMap.count(a))
        {
            freqMap[a] = freqMap[a] + 1;
        }
        else
        {
            freqMap[a] = 1;
        }
    }

    int typeWithMaxCount = 0;
    int maxCount = 0;
    for (auto i = freqMap.begin(); i != freqMap.end(); i++)
    {
        if (maxCount < i->second)
        {
            typeWithMaxCount = i->first;
            maxCount = i->second;
        }
    }

    return typeWithMaxCount;
}

bool test_case_1()
{
    vector<int> arr = {1, 1, 1, 2, 2, 3};
    int expected = 1;

    int result = migratoryBirds(arr);

    cout << "Result: " << result << endl;
    cout << "Expected: " << expected << endl;

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