#include "SolutionHeader.h"

void minimumBribesTest(vector<int> q)
{
    map<int, int> freqMap;
    int total = 0;
    for (int i = 0; i < q.size() - 1; i++)
    {
        for (int j = 0; j < q.size() - i - 1; j++)
        {
            if (q[j] > q[j + 1])
            {
                total++;
                if (freqMap.count(q[j]))
                {
                    if (freqMap[q[j]] == 2)
                    {
                        cout << "Too chaotic" << endl;
                        return;
                    }
                    freqMap[q[j]] = freqMap[q[j]] + 1;
                }
                else
                {
                    freqMap[q[j]] = 1;
                }

                int temp = q[j];
                q[j] = q[j + 1];
                q[j + 1] = temp;
            }
        }
    }

    cout << total << endl;

    for (auto it = freqMap.begin(); it != freqMap.end(); it++)
    {
        cout << it->first << ": " << it->second << "\n";
    }

    cout << "Result: ";
    for (auto i : q)
        cout << i << ' ';
    cout << endl;
}

void minimumBribes(vector<int> q)
{
    int total = 0;

    for (int i = 0; i < q.size(); i++)
    {
        int value = q[i];
        int diff = (value) - (i + 1);

        if (diff > 0)
        {
            total += diff;
        }

        cout << q[i] << ": " << diff << endl;

        if (diff > 2)
        {
            cout << "Too chaotic" << endl;
            return;
        }
    }

    cout << total << endl;
}