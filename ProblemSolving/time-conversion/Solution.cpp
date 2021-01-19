#include "SolutionHeader.h"

string timeConversion(string s)
{
    string hh = s.substr(0, 2);
    string mm = s.substr(3, 2);
    string ss = s.substr(6, 2);
    string format = s.substr(8, 2);
    string hh_12 = "";
    if (format.compare("PM") == 0)
    {
        int hh_int = stoi(hh) + 12;
        if (hh_int == 24)
        {
            hh_int = 12;
        }

        stringstream resultfmt;
        resultfmt << setfill('0') << setw(2) << hh_int;
        hh_12 = resultfmt.str();
    }
    else if (hh.compare("12") == 0)
    {
        hh_12 = "00";
    }
    else
    {
        hh_12 = hh;
    }

    stringstream fmt;
    fmt << hh_12 << ":" << mm << ":" << ss;

    return fmt.str();
}
