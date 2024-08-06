```C++
class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> stable;

        for(int i = 0; i < s.length(); i++){
            stable[s[i]]++;
        }

        unordered_map<char, int> ttable;

        for(int i = 0; i < t.length(); i++){
            ttable[t[i]]++;
        }

        for(const auto& pair : ttable){
            if(pair.second != stable[pair.first]){
                return pair.first;
            }
        }

        return 'a';
    }
};
```