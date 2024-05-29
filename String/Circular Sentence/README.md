```C++
class Solution {
public:
    bool isCircularSentence(string sentence) {
        bool firstCondition = true;
        for(int i = 1; i < sentence.length() - 1; i++){
            if(sentence[i] == ' '){
                if(!(sentence[i - 1] == sentence[i + 1])){
                    firstCondition = false;
                }
            }
        }
        bool secondCondition = sentence[0] == sentence[sentence.length() - 1];
        return firstCondition && secondCondition;
    }
};
```