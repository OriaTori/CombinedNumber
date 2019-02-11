#include "CombinedNumber.hpp"
#include <algorithm>
#include <functional>

std::string CombinedNumber::constructGreatestNumber(std::list<unsigned int> l)
{
    std::string temp = "";
    if (l.empty())
            return "";
    if (l.size() > 0)
    {
        l.sort([](unsigned int lhs, unsigned int rhs)
        {
            return (std::to_string(lhs) > std::to_string(rhs));
        });
        for(auto it : l)
        {
            temp += std::to_string(it);
        }
     }
     return temp;
}

