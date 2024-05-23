```C++
class Solution {
public:
    int mySqrt(int x) {
        int sqrtInteger = 0;
        for(long long int i = 1; i*i <= x; i++){
            sqrtInteger = i;
        }
        return sqrtInteger;
    }
};
```