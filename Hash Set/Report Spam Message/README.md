```C++
class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        int count = 0;
        unordered_set<string> banned;
        for(string word: bannedWords){
            banned.insert(word);
        }
        for(string word : message){
            if(banned.contains(word)){
                count++;
            }
        }
        if(count >= 2){
            return true;
        }
        return false;
    }
};
```