#include <math.h>
#include <string>

namespace Aritmetic
{
    namespace
    {
        std::string add(std::string a, std::string b)
        { 
            std::string result = "";
            size_t aDigits = a.size();
            size_t bDigits = b.size();
            size_t backAIndex = aDigits - 1;
            size_t backBIndex = b.size() - 1;
            short carry = 0;
            
            for (backBIndex; backBIndex > 0; backBIndex--)
            {
                short value = carry + ((short)a[backAIndex--] - (short)'0') + ((short)b[backBIndex] - (short)'0');
                result.insert(result.begin(), value%10 + (short)'0');
                carry = (short)(value / 10);
            }
            short value = carry + ((short)a[backAIndex--] - (short)'0') + ((short)b[backBIndex] - (short)'0');
            result.insert(result.begin(), value%10 + '0');
            carry = (short)(value / 10);

            if (carry != 0)
                result.insert(result.begin(), carry+'0');
            std::string rest = a.substr(0, a.size() - b.size());
            result.insert(result.begin(), rest.begin(), rest.end());

            return result;
        }
    }
    std::string Add(std::string a1, std::string a2)
    {
        std::string result = "";
        short reminder;
        size_t aDigits = a1.size();
        size_t bDigits = a2.size();

        if (aDigits >= bDigits)
            return add(a1, a2);
        else
            return add(a2, a1);
    }

    std::string Multiply(std::string a1, std::string a2)
    {
        return "";
    }
}
