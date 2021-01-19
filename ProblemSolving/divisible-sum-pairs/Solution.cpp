#include "SolutionHeader.h"

int divisibleSumPairs(int n, int k, vector<int> ar)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n - 1; j++)
        {
            int sum = ar[i] + ar[j + 1];
            if (sum % k == 0)
            {
                count++;
            }
        }
    }

    return count;
}
