#include "SolutionHeader.h"

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
