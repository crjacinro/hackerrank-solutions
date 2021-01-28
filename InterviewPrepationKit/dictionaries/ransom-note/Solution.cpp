#include "SolutionHeader.h"

void checkMagazine(vector<string> magazine, vector<string> note)
{
    map<string, int> dictionary;

    for (auto word : magazine)
    {
        auto finder = dictionary.find(word);
        if (finder == dictionary.end())
        {
            dictionary.insert({word, 1});
        }
        else
        {
            finder->second++;
        }
    }

    for (auto word : note)
    {
        auto finder = dictionary.find(word);

        if (finder != dictionary.end() && finder->second > 0)
        {
            finder->second = finder->second - 1;
        }
        else
        {
            result = "No";
            return result;
        }
    }

    result = "Yes";
    return result;
}