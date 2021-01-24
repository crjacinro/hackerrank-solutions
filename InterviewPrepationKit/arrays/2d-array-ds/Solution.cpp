#include "SolutionHeader.h"

int hourglassSum(vector<vector<int>> arr)
{
    int max = INT_MIN;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            int glassSum = 0;
            glassSum += arr[0 + i][0 + j];
            glassSum += arr[0 + i][1 + j];
            glassSum += arr[0 + i][2 + j];
            glassSum += arr[1 + i][1 + j];
            glassSum += arr[2 + i][0 + j];
            glassSum += arr[2 + i][1 + j];
            glassSum += arr[2 + i][2 + j];

            if (glassSum > max)
            {
                max = glassSum;
            }
        }
    }

    return max;
}