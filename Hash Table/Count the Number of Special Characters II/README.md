```C++
class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char, int> capitalTable;
        unordered_map<char, int> smallTable;
        unordered_set<char> bothTable;

        for(int i = 0; i < word.length(); i++){
            if(word[i] > 64 && word[i] < 91){
                if(!capitalTable.contains(word[i])){
                    capitalTable[word[i]] = i;
                }
            }

            if(word[i] > 96 && word[i] < 123){
                smallTable[word[i]] = i;
            }
        }

        for(const auto& pair : smallTable){
            if(capitalTable.contains(pair.first - 32) && pair.second < capitalTable[pair.first - 32]){
                bothTable.insert(pair.first);
            }
        }

        return bothTable.size();
    }
};
```