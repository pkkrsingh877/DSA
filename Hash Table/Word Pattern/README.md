```C++
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> charToString;
        unordered_map<string, char> stringToChar;

        vector<string> items;
        string item = "";

        for(int i = 0; i < s.length(); i++){
            if(s[i] == ' '){
                items.push_back(item);
                item = "";
            }else{
                item += s[i];
            }
        }
        items.push_back(item);

        if(items.size() != pattern.length()){
            return false;
        }

        for(int i = 0; i < pattern.length(); i++){
            if((charToString.contains(pattern[i]) && charToString[pattern[i]] != items[i]) || (stringToChar.contains(items[i]) && stringToChar[items[i]] != pattern[i])){
                return false;
            }else{
                charToString[pattern[i]] = items[i];
                stringToChar[items[i]] = pattern[i];
            }
        }

        return true;
    }
};
```