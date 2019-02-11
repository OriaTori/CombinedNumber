#include "CombinedNumber.hpp"

std::string CombinedNumber::constructGreatestNumber(std::list<unsigned int> l)
{
    std::string temp = "";
    if (l.empty())
            return "";
    if (l.size() > 0)
    {
        for(auto it : l)
            temp += std::to_string(it);
     }
     return temp;
}
