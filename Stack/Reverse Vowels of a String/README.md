```C++
class Solution {
public:
    int isVowel(char ch){
        string str = "aeiouAEIOU";
        return (str.find(ch) != string::npos);
    }

    string reverseVowels(string s) {
        stack <char> vowelStack;
        string newString = "";
        char temp = 'c';

        for(char c : s){
            if(isVowel(c)){
                vowelStack.push(c);
            }
        }
        for(char c : s){
            if(isVowel(c)){
                temp = vowelStack.top();
                vowelStack.pop();
                newString += temp;
            }else{
                newString += c;
            }
        }
        return newString;
    }
};
```