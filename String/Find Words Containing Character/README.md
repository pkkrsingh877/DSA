```cpp
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> result = {};
        int i = 0;
        for(string word : words){
            for(char c : word){
                if(c == x){
                    result.push_back(i);
                    break;
                }
            }
            i++;
        }
        return result;
    }
};
```