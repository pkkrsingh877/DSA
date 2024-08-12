```C++
class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int, int> table;
        for(int num : nums){
            table[num]++;
        }
        int leftOver = 0;
        int paired = 0;
        for(const auto& pair : table){
            paired += (pair.second / 2);
            if(pair.second % 2 != 0){
               leftOver++; 
            }
        }
        vector<int> result = {paired, leftOver};
        return result;
    }
};
```