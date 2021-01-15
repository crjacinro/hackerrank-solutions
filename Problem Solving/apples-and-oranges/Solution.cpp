#include "SolutionHeader.h"

string countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges)
{
    int appleCounter = 0;
    int orangeCounter = 0;

    for (auto apple : apples)
    {
        int position = a + apple;
        if (position >= s && position <= t)
        {
            appleCounter++;
        }
    }

    for (auto orange : oranges)
    {
        int position = b + orange;
        if (position >= s && position <= t)
        {
            orangeCounter++;
        }
    }
    stringstream fmt;
    fmt << appleCounter << " " << orangeCounter;
    return fmt.str();
}