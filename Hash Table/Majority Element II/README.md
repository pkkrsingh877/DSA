```C++
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> table;
        vector<int> results;

        for(int num : nums){
            table[num]++;
        }

        for(const auto& pair : table){
            if(pair.second > nums.size()/3){
                results.push_back(pair.first);
            }
        }
        return results;
    }
};
```