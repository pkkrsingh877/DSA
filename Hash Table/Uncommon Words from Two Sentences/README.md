```C++
class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> wordCountTable;

        string newString = "";

        for(int i = 0; i < s1.length(); i++){
            if(s1[i] != ' '){
                newString += s1[i];
                if(s1[i + 1] == ' '){
                    wordCountTable[newString]++;
                }
            }else{
                newString = "";
            }
        }
        wordCountTable[newString]++;

        newString = "";

        for(int i = 0; i < s2.length(); i++){
            if(s2[i] != ' '){
                newString += s2[i];
                if(s2[i + 1] == ' '){
                    wordCountTable[newString]++;
                }
            }else{
                newString = "";
            }
        }
        wordCountTable[newString]++;

        vector<string> uncommonWords;
        for(auto &entry : wordCountTable){
            if(entry.second == 1){
                uncommonWords.push_back(entry.first);
            }
        }
        return uncommonWords;
    }
};
```