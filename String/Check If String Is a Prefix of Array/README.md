```C++
class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string sentence = "";
        for(auto& word : words){
            sentence += word;
            if(sentence == s){
                return true;
            }
        }
        return false;
    }
};
```