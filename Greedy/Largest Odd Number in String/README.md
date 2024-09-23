```C++
/*
We are basically traversing backwards trying to find an odd digit. The moment we find it
we return from 0 to that digit index as substring as that is biggest odd number.
Otherwise we return "" (empty string).
*/

class Solution {
public:
    string largestOddNumber(string num) {
        for(int i = num.length() - 1; i > -1; i--){
            if((num[i] - '0') % 2 != 0){
                return num.substr(0, i + 1);
            }
        }
        return "";
    }
};
```