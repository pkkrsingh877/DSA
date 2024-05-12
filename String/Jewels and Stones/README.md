```cpp
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int jewelsInStones = 0;
        for(char j : jewels){
            for(char s : stones){
                if(j == s){
                    jewelsInStones++;
                }
            }
        }
        return jewelsInStones;
    }
};
```