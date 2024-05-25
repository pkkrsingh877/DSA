```C++
class Solution {
public:
    bool isVowel(char c){
        string vowel = "aeiouAEIOU";
        if(vowel.find(c) != string::npos){
            return true;
        }
        return false;
    }
    bool halvesAreAlike(string s) {
        int countFirstHalf = 0, countSecondHalf = 0;
        for(int i = 0; i < s.length()/2; i++){
            if(isVowel(s[i])){
                countFirstHalf++;
            }
        }
        for(int i = s.length()/2; i < s.length(); i++){
            if(isVowel(s[i])){
                countSecondHalf++;
            }
        }
        return countFirstHalf == countSecondHalf;
    }
};
```