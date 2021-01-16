#include "SolutionHeader.h"

vector<int> breakingRecords(vector<int> scores)
{
    int max = scores.front();
    int min = scores.front();
    vector<int> result;

    int maxBreaks = 0;
    int minBreaks = 0;

    for (auto score : scores)
    {
        if (score > max)
        {
            maxBreaks++;
            max = score;
            continue;
        }

        if (score < min)
        {
            minBreaks++;
            min = score;
            continue;
        }
    }

    result = {maxBreaks,
              minBreaks};

    return result;
}
