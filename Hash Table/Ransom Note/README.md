```C++
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> magazineLetters;

        for(char letter : magazine){
            magazineLetters[letter]++;
        }

        for(char letter : ransomNote){
            if(magazineLetters.find(letter) == magazineLetters.end() || magazineLetters[letter] == 0){
                return false;
            }
            magazineLetters[letter]--;
        }

        return true;
    }
};
```