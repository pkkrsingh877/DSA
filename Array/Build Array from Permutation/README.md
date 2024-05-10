```C++
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> returnNums;
        for(int i = 0; i < nums.size(); i++){
            returnNums.push_back(nums[nums[i]]);
        }
        return returnNums;
    }
};
```