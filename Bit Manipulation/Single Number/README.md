```C++
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int consecutiveXor = nums[0];

        for(int i = 1; i < nums.size(); i++){
            consecutiveXor ^= nums[i];
        }

        return consecutiveXor;
    }
};
```