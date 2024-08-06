```C++
class Solution {
public:
    bool isReverse(int first, int second){
        int reverse = 0;
        
        while(first){
            int digit = first % 10;
            reverse = reverse * 10 + digit;
            first /= 10;
        }

        if(reverse == second){
            return true;
        }

        return false;
    }
    bool sumOfNumberAndReverse(int num) {

        for(int i = 0; i <= num; i++){
            if(isReverse(i, num - i)){
                return true;
            }
        }

        return false;
    }
};
```