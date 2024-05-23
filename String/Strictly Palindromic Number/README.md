```C++
class Solution {
public:
    string reverse(string s){
        for(int i = 0; i < s.length()/2; i++){
            char temp = s[i];
            s[i] = s[s.length() - i - 1];
            s[s.length() - 1 - i] = temp;
        }
        return s;
    }
    bool isStrictlyPalindromic(int n) {
        int isPalindromic = true;
        for(int i = 2; i <= n - 2; i++){
            int num = n;
            string number = "";
            while(num){
                int digit = num % i;
                number += char(digit);
                num = num / i;
            }
            string temp = number;
            if(!(temp == reverse(number))){
                isPalindromic = false;
            }
        }
        return isPalindromic;
    }
};
```
