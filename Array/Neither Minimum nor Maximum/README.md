```C++
class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int min = INT_MAX;
        int max = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            if(max < nums[i]){
                max = nums[i];
            }
            if(min > nums[i]){
                min = nums[i];
            }
        }
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != max && nums[i] != min){
                return nums[i];
            }
        }
        return -1;
    }
};
```