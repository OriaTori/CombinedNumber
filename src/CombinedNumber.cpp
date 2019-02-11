#include "CombinedNumber.hpp"
#include <functional>

std::string CombinedNumber::constructGreatestNumber(std::list<unsigned int> l)
{
    std::string temp = "";
    if (l.empty())
            return "";
    if (l.size() > 0)
    {
        l.sort(std::greater<int>());
        for(auto it : l)
        {
            temp += std::to_string(it);
        }
     }
     return temp;
}
