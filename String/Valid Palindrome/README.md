```C++
class Solution {
public:
    bool isPalindrome(string s) {
        string text = "";
        for(char ch : s){
            if(ch > 64 && ch < 91){
                text += static_cast<char>(ch + 32);
            }else if(ch > 96 && ch < 123){
                text += ch;
            }else if(ch >= '0' && ch <= '9'){
                text += ch;
            }
        }
        string reverse = "";
        for(int i = text.length() - 1; i > -1; i--){
            reverse += text[i];
        }
        return reverse == text;
    }
};
```