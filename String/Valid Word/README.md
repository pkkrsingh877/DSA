```C++
class Solution {
public:
    bool isValid(string word) {
        bool length = false;
        if(word.length() >= 3){
            length = true;
        }

        bool dul = true; // for checking digits, uppercase, and lowercase
        int vowel = 0, consonent = 0;

        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

        for(int i = 0; i < word.length(); i++){
            if((word[i] > 64 && word[i] < 91) || (word[i] > 96 && word[i] < 123) || (word[i] > 47 && word[i] < 58)){

            }else{
                dul = false;
            }
            if((word[i] > 64 && word[i] < 91) || (word[i] > 96 && word[i] < 123)){
                if(vowels.contains(word[i])){
                    vowel++;
                }else{
                    consonent++;
                }
            }
        }

        return vowel && consonent && dul && length;
    }
};
```