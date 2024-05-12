#include "checks.h"

bool IsKPeriodic(const std::string& s, int k) 
{
    int n = s.length();
    if (k <= 0 || k > n) 
    {
        return false;
    }
    if (n % k != 0) 
    {
        return false;
    }
    std::string pattern = s.substr(0, k);
    for (int i = k; i < n; i += k) 
    {
        if (s.substr(i, k) != pattern) 
        {
            return false;
        }
    }
    return true;
}