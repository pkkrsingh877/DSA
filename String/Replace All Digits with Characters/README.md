```C++
class Solution {
public:
    string replaceDigits(string s) {
        for(int i = 1; i < s.length(); i += 2){
            char prev = s[i - 1];
            s[i] = char(int(prev) + s[i] - '0');
        }
        return s;
    }
};
```