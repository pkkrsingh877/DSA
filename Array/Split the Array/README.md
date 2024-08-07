```C++
class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int, int> table;
        for(int i = 0; i < nums.size(); i++){
            table[nums[i]]++;
        }

        bool isPossible = true;
        for(const auto& pair : table){
            if(pair.second > 2){
                isPossible = false;
            }
        }

        return isPossible;
    }
};
```