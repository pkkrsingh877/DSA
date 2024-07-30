```C++
class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int, vector<int>> table;
        vector<vector<int>> result;

        for(int i = 0; i < groupSizes.size(); i++){
            table[groupSizes[i]].push_back(i);
            if(table[groupSizes[i]].size() == groupSizes[i]){
                result.push_back(table[groupSizes[i]]);
                table[groupSizes[i]].clear();
            }
        }
        
        return result;
    }
};
```