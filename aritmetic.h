#include <math.h>
#include <string>

#define CHR_TO_SHR(chr) (short)(chr - '0')

namespace Aritmetic
{
    // 123, 78
    std::string add(std::string a, std::string b)
    {
        std::string result = "";

        size_t aDigits = a.size();
        size_t bDigits = b.size();
        short carry = 0;
        size_t index = 0;
        while(index < bDigits)
        {
          size_t backIndex = bDigits - index - 1;
          short sum = CHR_TO_SHR(a[backIndex + (aDigits - bDigits)]) + CHR_TO_SHR(b[backIndex]);

          sum += carry;
          carry = sum/10;
          char digit;
          if(sum > 9)
            digit = sum - 10;
          else
            digit = sum;

          result.insert(result.begin(), '0' + digit);
          index++;
        }

        std::string rest = a.substr(0, aDigits - bDigits);
        rest[rest.size()-1] += carry;
        result.insert(result.begin(), rest.begin(), rest.end());

        return result;
    }

    std::string Add(std::string a1, std::string a2)
    {
        if (a1.size() >= a2.size())
            return add(a1, a2);
        else
            return add(a2, a1);
    }

    std::string Multiply(std::string a1, std::string a2)
    {
        return "";
    }
}
