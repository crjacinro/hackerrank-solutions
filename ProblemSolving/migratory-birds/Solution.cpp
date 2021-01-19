#include "SolutionHeader.h"

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
