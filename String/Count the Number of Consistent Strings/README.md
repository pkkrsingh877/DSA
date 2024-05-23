```C++
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;
        for(string word : words){
            bool isConsistent = true;
            for(int i = 0; i < word.length(); i++){
                if(allowed.find(word[i]) == string::npos){
                    isConsistent = false;
                }
            }
            if(isConsistent){
                count++;
            }
        }
        return count;
    }
};
```