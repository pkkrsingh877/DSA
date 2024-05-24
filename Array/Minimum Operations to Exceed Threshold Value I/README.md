```C++
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(k > nums[i]){
                count++;
            }
        }
        return count;
    }
};
```