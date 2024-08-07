```C++
class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<char> capitalTable;
        unordered_set<char> smallTable;
        unordered_set<char> bothTable;

        for(int i = 0; i < word.length(); i++){
            if(word[i] > 64 && word[i] < 91){
                capitalTable.insert(word[i]);
            }

            if(word[i] > 96 && word[i] < 123){
                smallTable.insert(word[i]);
            }
        }

        for(char ch : smallTable){
            if(capitalTable.contains(ch - 32)){
                bothTable.insert(ch);
            }
        }

        return bothTable.size();
    }
};
```