```C++
class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        vector<string> revWords;
        string newWord = "";
        int count = 0;
        for(string word : words){
            newWord = "";
            newWord += word[1];
            newWord += word[0];
            revWords.push_back(newWord);
        }
        for(int i = 0; i < words.size() - 1; i++){
            for(int j = i + 1; j < revWords.size(); j++){
                if(words[i] == revWords[j]){
                    count++;
                }
            }
        }
        return count;
    }
};
```