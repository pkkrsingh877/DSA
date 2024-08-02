```C++
class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int consecutiveOddCount = 0;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] % 2 != 0){
                consecutiveOddCount++;
            }else{
                consecutiveOddCount = 0;
            }
            if(consecutiveOddCount == 3){
                return true;
            }
        }
        return false;
    }
};
```