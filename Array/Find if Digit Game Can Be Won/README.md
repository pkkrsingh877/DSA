```C++
class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int singleDigitSum = 0;
        int doubleDigitSum = 0;
        for(int num : nums){
            if(num < 10){
                singleDigitSum += num;
            }else{
                doubleDigitSum += num;
            }
        }
        if(singleDigitSum == doubleDigitSum){
            return false;
        }
        return true;
    }
};
```
