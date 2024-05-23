```C++
class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sumOfDigits = 0;
        int number = x;
        while(x){
            int digit = x % 10;
            sumOfDigits += digit;
            x /= 10;
        }
        if(number % sumOfDigits == 0){
            return sumOfDigits;
        }else{
            return -1;
        }
    }
};
```