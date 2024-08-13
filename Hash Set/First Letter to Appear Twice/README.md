```C++
class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<char> box;
        for(char ch : s){
            if(box.contains(ch)){
                return ch;
            }else{
                box.insert(ch);
            }
        }
        return s[0];
    }
};
```