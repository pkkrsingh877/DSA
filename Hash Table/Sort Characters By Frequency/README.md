```C++
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> table;

        for(char character : s){
            table[character]++;
        }

        string sortedString = "";
        vector<pair<int, char>> frequencyVector;
        for(const auto& pair : table){
            frequencyVector.push_back({pair.second, pair.first});
        }

        sort(frequencyVector.begin(), frequencyVector.end(), greater<pair<int, char>>());

        for(const auto& pair : frequencyVector){
            sortedString.append(pair.first, pair.second);
        }

        return sortedString;

    }
};
```