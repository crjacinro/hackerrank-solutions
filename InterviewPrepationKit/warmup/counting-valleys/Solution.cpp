#include "SolutionHeader.h"

int countingValleys(int steps, string path)
{
    int unitCount = 0;
    int valleyCount = 0;
    bool isFromValley = false;
    for (char &c : path)
    {
        if (unitCount < 0)
        {
            isFromValley = true;
        }

        if (c == 'U')
        {
            unitCount++;
        }
        else if (c == 'D')
        {
            unitCount--;
        }

        if (isFromValley && unitCount == 0)
        {
            valleyCount++;
            isFromValley = false;
        }
    }

    return valleyCount;
}