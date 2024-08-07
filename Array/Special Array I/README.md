```C++
class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        bool parity = true;

        for(int i = 1; i < nums.size(); i++){
            if(nums[i - 1] % 2 == nums[i] % 2){
                parity = false;
            }
        }

        return parity;
    }
};
```