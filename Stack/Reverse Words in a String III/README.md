```C++
class Solution {
public:
    string reverseString(string s){
        stack<char> word;
        for(char c : s){
            word.push(c);
        }
        string reversed = "";
        while(!word.empty()){
            char newChar = word.top();
            word.pop();
            reversed += newChar;
        }
        return reversed;
    }
    string reverseWords(string s) {
        string reversedString = "";
        string newWord = "";
        for(char c : s){
            if(c != ' '){
                newWord += c;
            }else{
                reversedString += reverseString(newWord);
                reversedString += ' ';
                newWord = "";
            }
        }
        // Need to do it once outside for last word
        reversedString += reverseString(newWord);

        return reversedString;
    }
};
```