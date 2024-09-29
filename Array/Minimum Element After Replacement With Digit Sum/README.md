```C++
class Solution {
public:
    int digitSum(int num){
        int sum = 0;
        while(num){
            int digit = num % 10;
            sum += digit;
            num /= 10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            nums[i] = digitSum(nums[i]);
        }
        int minimumElement = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            if(minimumElement > nums[i]){
                minimumElement = nums[i];
            }
        }
        return minimumElement;
    }
};
```