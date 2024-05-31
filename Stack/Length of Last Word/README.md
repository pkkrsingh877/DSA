```C++
class Solution {
public:
    int lengthOfLastWord(string s) {
        stack<int> lengthOfWords;
        int i = 0, count = 0;
        while(i < s.length()){
            if(s[i] != ' '){
                count++;
            }else{
                if(count){
                    lengthOfWords.push(count);
                }
                count = 0;
            }
            i++;
        }
        if(count){
            lengthOfWords.push(count);
        }
        return lengthOfWords.top();    
    }
};
```