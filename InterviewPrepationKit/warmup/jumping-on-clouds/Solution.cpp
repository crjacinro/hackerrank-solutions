#include "SolutionHeader.h"

int jumpingOnClouds(vector<int> c)
{
    if (c.size() == 1)
    {
        return 0;
    }

    if (c.size() == 2)
    {
        if (c[1] == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    if (c[2] == 0)
    {
        return 1 + jumpingOnClouds({c.begin() + 2, c.end()});
    }
    else
    {
        return 1 + jumpingOnClouds({c.begin() + 1, c.end()});
    }
}

int jumpingOnCloudIterative(vector<int> c)
{
    int i = 0;
    int count = 0;

    cout << "size: " << c.size() << endl;

    while (i < c.size())
    {
        if (i + 2 < c.size() && c[i + 2] == 0)
        {
            i += 2;
            count++;

            cout << "i: " << i << endl;
            cout << "count 2+: " << count << endl;
        }
        else if (i + 1 < c.size() && c[i + 1] == 0)
        {
            i++;
            count++;
            cout << "i: " << i << endl;
            cout << "count 1+: " << count << endl;
        }
        else
        {
            i++;
        }
    }

    return count;
}