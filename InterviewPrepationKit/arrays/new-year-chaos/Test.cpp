#include "SolutionHeader.h"

bool testCase1()
{
    vector<int> q = {2, 5, 1, 3, 4};

    minimumBribes(q);

    return true;
}

bool testCase2()
{
    vector<int> q = {2, 1, 5, 3, 4};

    minimumBribes(q);

    return true;
}

bool testCase3()
{
    vector<int> q = {1, 2, 5, 3, 7, 8, 6, 4};

    minimumBribes(q);

    return true;
}