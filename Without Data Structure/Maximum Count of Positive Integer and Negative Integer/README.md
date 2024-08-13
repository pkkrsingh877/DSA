```C++
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int plusCount = 0;
        int minusCount = 0;
        for(int num : nums){
            if(num > 0){
                plusCount++;
            }else if(num < 0){
                minusCount++;
            }
        }
        if(plusCount > minusCount){
            return plusCount;
        }
        return minusCount;
    }
};
```