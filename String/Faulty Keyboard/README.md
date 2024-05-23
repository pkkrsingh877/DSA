```C++
class Solution {
public:
    string reverseString(string s, int index){
        string newString = "";
        for(int i = index; i > -1; i--){
            newString += s[i];
        }
        return newString;
    }
    string finalString(string s) {
        string newString;
        int count = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'i'){
                count++;
                int index = i;
                newString = reverseString(newString, index - count);
            }else{
                newString += s[i];
            }
        }
        return newString;
    }
};
```