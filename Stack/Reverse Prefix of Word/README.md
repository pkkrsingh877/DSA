```C++
class Solution {
public:
    string reverseIt(string word){
        cout << "The String passed to reverseIt function is " << word << endl;
        stack<char> reverseStack;
        string reverseString = "";
        for(char ch : word){
            reverseStack.push(ch);
        }
        while(!reverseStack.empty()){
            char character = reverseStack.top();
            reverseString += character;
            reverseStack.pop();
        }
        return reverseString;
    }
    string reversePrefix(string word, char ch) {
        int finalIndex = 0;
        for(int i = 0; i < word.length(); i++){
            if(word[i] == ch){
                finalIndex = i;
                break;
            }
        }
        string prefix = reverseIt(word.substr(0, finalIndex + 1));
        return prefix + word.substr(finalIndex + 1, word.length());
    }
};
```