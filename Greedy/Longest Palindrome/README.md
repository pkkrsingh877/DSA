```C++
// We dont need to construct each palindrome. Just find out length which is simple.
class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> table;
        for(char character : s){
            table[character]++;
        }
        int length = 0;
        bool isSingle = false;
        for(const auto& pair : table){
            if(pair.second % 2 == 0){
                length += pair.second;
            }else if(pair.second != 1){
                length += pair.second - 1;
                isSingle = true;
            }else{
                isSingle = true;
            }
        }
        if(isSingle){
            length += 1;
        }
        
        return length;
    }
};
```