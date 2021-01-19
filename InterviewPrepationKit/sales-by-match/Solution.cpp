#include "SolutionHeader.h"

int sockMerchant(int n, vector<int> ar)
{
    map<int, int> freqMap;
    for (auto a : ar)
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

    int pairCount = 0;
    for (auto i = freqMap.begin(); i != freqMap.end(); i++)
    {
        int sockCount = i->second;
        if (sockCount % 2 != 0)
        {
            pairCount += (sockCount - 1) / 2;
        }
        else
        {
            pairCount += (sockCount) / 2;
        }
    }

    return pairCount;
}