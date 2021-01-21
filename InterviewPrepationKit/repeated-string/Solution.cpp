#include "SolutionHeader.h"

long repeatedString(string s, long n)
{
    long countA = 0;
    long quotient = n / s.size();
    long modulo = n % s.size();
    long totalA = 0;
    long extra = 0;

    for (char &c : s)
    {
        if (c == 'a')
        {
            countA++;
        }
    }

    if (modulo > 0)
    {
        int anotherCount = 1;
        for (char &c : s)
        {
            if (((quotient * s.size()) + anotherCount) > n)
            {
                break;
            }
            if (c == 'a')
            {
                extra++;
            }
            anotherCount++;
        }
    }

    totalA = (quotient * countA) + extra;

    return totalA;
}