#include "SolutionHeader.h"

int getTotalX(vector<int> a, vector<int> b)
{
    int start = a.back();
    int end = b.back();
    int result = 0;

    while (start <= end)
    {
        bool goodForA = true;
        bool goodForB = true;

        for (auto x : a)
        {
            if (start % x != 0)
            {
                goodForA = false;
            }
        }

        if (goodForA)
        {
            for (auto x : b)
            {
                if (x % start != 0)
                {
                    goodForB = false;
                }
            }
        }

        if (goodForA && goodForB)
        {
            result++;
        }
        start++;
    }

    return result;
}
