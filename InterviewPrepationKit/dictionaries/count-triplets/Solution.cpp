#include "SolutionHeader.h"

long countTriplets(vector<long> arr, long r)
{
    map<long, int> ratioCountMap;
    vector<long> ratioArray;

    long max = *max_element(arr.begin(), arr.end());
    int i = 0;
    long power = 0;

    while (power < max)
    {
        power = pow(r, i);
        ratioArray.push_back(power);
        i++;
    }

    for (auto num : arr)
    {
        for (auto common : ratioArray)
        {
            if (num == common)
            {
                auto finder = ratioCountMap.find(common);
                if (finder == ratioCountMap.end())
                {
                    ratioCountMap.insert({common, 1});
                }
                else
                {
                    finder->second++;
                }

                break;
            }
        }
    }

    long total = 0;
    for (auto it = ratioCountMap.begin(); it != ratioCountMap.end(); it++)
    {
        long maximum = -1;

        auto nextItem = next(it, 1);
        auto nextNextItem = next(it, 2);

        if (nextNextItem == ratioCountMap.end())
        {
            break;
        }

        maximum = it->second;
        if (nextItem->second > maximum)
        {
            maximum = nextItem->second;
        }
        if (nextNextItem->second > maximum)
        {
            maximum = nextNextItem->second;
        }

        cout << "it: " << it->first << ": " << it->second << "\n";
        cout << "nextItem: " << nextItem->first << ": " << nextItem->second << "\n";
        cout << "nextNextItem: " << nextNextItem->first << ": " << nextNextItem->second << "\n";
        cout << "max: " << maximum << "\n";

        total += maximum;
    }

    return total;
}