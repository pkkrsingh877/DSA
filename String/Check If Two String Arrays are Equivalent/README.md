```C++
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string firstWord = "";
        string secondWord = "";
        for(auto& word : word1){
            firstWord += word;
        }
        for(auto& word : word2){
            secondWord += word;
        }

        return firstWord == secondWord;
    }
};
```