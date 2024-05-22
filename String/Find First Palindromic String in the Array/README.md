```C++
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(string word : words){
            int count = 0;
            for(int i = 0; i < word.length()/2; i++){
                if(word[i] == word[word.length() - 1 - i]){
                    count++;
                }
            }
            if(count == word.length()/2){
                return word;
            }
        }
        return "";
    }
};
```