#include <iostream>
#include "checks.h"

int main() 
{
    std::string str = "abcabcabcabc";
    int k = 3;
    if (IsKPeriodic(str, k)) 
    {
        std::cout << "The string '" << str << "' is k-periodic with k = " << k << ".\n";
    }
    else 
    {
        std::cout << "The string '" << str << "' is not k-periodic with k = " << k << ".\n";
    }
    return 0;
}