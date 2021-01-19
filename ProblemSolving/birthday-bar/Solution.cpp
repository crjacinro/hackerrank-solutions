#include "SolutionHeader.h"

int birthday(vector<int> s, int d, int m)
{
    int current = 0;
    int result = 0;

    while (current + m <= s.size())
    {
        int count = 0;
        int sum = 0;
        int innercurrent = current;
        while (count < m)
        {
            sum += s[innercurrent];
            count++;
            innercurrent++;
        }
        if (sum == d)
        {
            result++;
        }
        current++;
    }

    return result;
}
