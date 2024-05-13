```C++
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWords = INT_MIN;
        for(auto& sentence : sentences){
            int count = 0;
            for(char c : sentence){
                if(c == ' '){
                    count++;
                }
            }
            count++;
            if(maxWords < count){
                maxWords = count;
            }
        }
        return maxWords;
    }
};
```