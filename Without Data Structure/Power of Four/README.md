```C++
class Solution {
public:
    bool isPowerOfFour(int n) {
        for(int x = 0; x < n && pow(4, x) <= n; x++){
            if(pow(4, x) == n){
                return true;
            }
        }
        return false;
    }
};
```