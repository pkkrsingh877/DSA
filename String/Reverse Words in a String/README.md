```C++
class Solution {
public:
    string reverseWords(string s) {
        stack<string> reverseStack;
        int startingIndex = -1;
        int endingIndex = -1;

        // Find Starting Index
        for(int i = 0; i < s.length(); i++){
            if(s[i] != ' '){
                startingIndex = i;
                break;
            }
        }

        // Find ending index
        for(int i = s.length() - 1; i > -1; i--){
            if(s[i] != ' '){
                endingIndex = i;
                break;
            }
        }

        s = s.substr(startingIndex, endingIndex - startingIndex + 1);

        string newString = "";
        string newSentence = "";
        for(int i = 0; i < s.length(); i++){
            if(s[i] != ' '){
                newString += s[i];
                if(s[i + 1] == ' '){
                    reverseStack.push(newString);
                }
            }else{
                newString = "";
            }
        }
        reverseStack.push(newString);
        while(!reverseStack.empty()){
            newSentence += reverseStack.top();
            newSentence += " ";
            reverseStack.pop();
        }
        newSentence.pop_back();
        return newSentence;
    }
};
```