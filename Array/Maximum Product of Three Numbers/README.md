```C++
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            int min_index = i;
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[min_index] < nums[j]){
                    min_index = j;
                }
            }
            if(min_index != i){
                int temp = nums[min_index];
                nums[min_index] = nums[i];
                nums[i] = temp;
            }
        }

        int firstMax = nums[0] * nums[1] * nums[2];
        int secondMax = nums[0] * nums[nums.size() - 1] * nums[nums.size() - 2];

        if(secondMax > firstMax){
            return secondMax;
        }
        
        return firstMax;
    }
};
```