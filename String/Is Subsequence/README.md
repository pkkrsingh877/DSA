```C++
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int startIndex = 0;
        int count = 0;
        for(int i = 0; i < s.length(); i++){
            for(int j = startIndex; j < t.length(); j++){
                if(s[i] == t[j]){
                    count++;
                    startIndex = j + 1;
                    break;
                }
            }
        }
        if(count == s.length()){
            return true;
        }
        return false;
    }
};
```