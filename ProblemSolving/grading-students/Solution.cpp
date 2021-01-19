#include "SolutionHeader.h"

int getNearestMultipleOfFive(int n)
{
    while (n % 5 != 0)
    {
        n++;
    }
    return n;
}

vector<int> gradingStudents(vector<int> grades)
{
    vector<int> result;

    for (int i = 0; i < grades.size(); i++)
    {
        int grade = grades[i];
        int nearestFive = getNearestMultipleOfFive(grade);

        if (grade < 38)
        {
            result.push_back(grade);
        }
        else if (nearestFive - grade < 3)
        {
            result.push_back(nearestFive);
        }
        else
        {
            result.push_back(grade);
        }
    }

    return result;
}
