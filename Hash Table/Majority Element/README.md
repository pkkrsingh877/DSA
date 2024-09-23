```C++
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> table;
        for(int num : nums){
            table[num]++;
        }
        int majorityElement = INT_MIN;
        for(const auto& pair : table){
            if(pair.second > nums.size()/2){
                majorityElement = pair.first;
            }
        }
        return majorityElement;
    }
};
```