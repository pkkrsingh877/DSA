```C++
class Solution {
public:
    string compressedString(string word) {
        string comp = "";
        int count = 0;
        for(int i = 0; i < word.length(); i++){
            if(word[i] == word[i + 1] && count < 8){
                count++;
            }else{
                count++;
                comp += static_cast<char>(count + '0');
                comp += word[i];
                count = 0;
            }
        }
        return comp;
    }
};
```