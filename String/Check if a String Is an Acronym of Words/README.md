```C++
class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string newString = "";
        for(int i = 0; i < words.size(); i++){
            newString += words[i][0];
        }
        return newString == s;
    }
};
```