```C++
class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> seen;
        int count = 0;
        for(char c : sentence){
            if(seen.find(c) != seen.end() == false){
                seen.insert(c);
                count++;
            }
        }
        if(count == 26){
            return true;
        }
        return false;
    }
};
```