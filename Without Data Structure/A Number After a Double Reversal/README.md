```C++
class Solution {
public:
    int reverse(int num){
        int original = num, digit, reversed = 0, oun;
        while(num){
            digit = num % 10;
            reversed = reversed * 10 + digit;
            num /= 10;
        }
        return reversed;
    }
    bool isSameAfterReversals(int num) {
        int first = reverse(num);
        int second = reverse(first);
        return num == second;
    }
};
```