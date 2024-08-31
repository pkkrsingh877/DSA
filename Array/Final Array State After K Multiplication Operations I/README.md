```C++
class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for(int i = 0; i < k; i++){
            int min_index = 0;
            int min = INT_MAX;
            for(int j = 0; j < nums.size(); j++){
                if(min > nums[j]){
                    min_index = j;
                    min = nums[j];
                }
            }
            nums[min_index] = multiplier * nums[min_index];
        }
        return nums;
    }
};
```