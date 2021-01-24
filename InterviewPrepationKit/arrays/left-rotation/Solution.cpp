#include "SolutionHeader.h"

vector<int> rotLeft(vector<int> a, int d)
{
    vector<int> finalArray(a.size());
    int lastIndex = a.size() - 1;
    for (int i = lastIndex; i >= 0; i--)
    {
        int diff = i - d;
        if (diff < 0)
        {
            diff = a.size() + diff;
        }

        finalArray[diff] = a[i];
    }

    return finalArray;
}
