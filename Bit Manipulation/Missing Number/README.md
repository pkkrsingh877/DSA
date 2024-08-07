```C++
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long sumOfAllNumbers = 0;
        long long sumOfAllArrayNumbers = 0;

        for(int i = 0; i <= nums.size(); i++){
            sumOfAllNumbers += i;
        }

        for(int i = 0; i < nums.size(); i++){
            sumOfAllArrayNumbers += nums[i];
        }

        return sumOfAllNumbers - sumOfAllArrayNumbers;
    }
};
```