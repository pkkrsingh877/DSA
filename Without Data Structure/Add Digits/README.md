```C++
class Solution {
public:
    int addDigits(int num) {
        int digit, sum = 0;
        while(num > 9){
            while(num){
                int digit = num % 10;
                sum += digit;
                num /= 10;
            }
            num = sum;
            sum = 0;
        }
        return num;
    }
};
```