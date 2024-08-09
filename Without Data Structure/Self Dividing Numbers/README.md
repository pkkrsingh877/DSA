```C++
class Solution {
public:
    bool isSelfDivingNumber(int num){
        int original = num;
        while(num){
            int digit = num % 10; 
            if(digit == 0 || original % digit != 0){
                return false;
            }
            num /= 10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> output;
        for(int i = left; i <= right; i++){
            if(isSelfDivingNumber(i)){
                output.push_back(i);
            }
        }
        return output;
    }
};
```