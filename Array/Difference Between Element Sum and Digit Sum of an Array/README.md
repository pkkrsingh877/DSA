```C++
class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementSum = 0, digitSum = 0;
        for(int num : nums){
            elementSum += num;
        }
        for(int num : nums){
            while(num){
                int digit = num % 10;
                num = num / 10;
                digitSum += digit;
            }
        }

        return elementSum - digitSum;
    }
};
```