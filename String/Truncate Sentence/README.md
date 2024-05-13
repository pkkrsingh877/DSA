```C++
class Solution {
public:
    string truncateSentence(string s, int k) {
        string word = "";
        string sentence = "";

        for(int i = 0; i < s.length() && k > 0; i++){
            sentence += s[i];
            if(s[i] == ' '){
                k--;
            }
        }

        if(sentence[sentence.length() - 1] == ' '){
            sentence.erase(sentence.length() - 1);
        }

        return sentence;
    }
};
```