```C++
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        unordered_map <int, char> table;

        for(int i = 0; i < s.length(); i++){
            table[indices[i]] = s[i];
        }

        string resultString = "";

        for(int i = 0; i < s.length(); i++){
            resultString += table[i];
        }

        return resultString;
    }
};

```