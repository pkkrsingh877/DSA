```C++
class Solution {
public:
    int xorOperation(int n, int start) {
        int xorr = start + 2 * 0;
        for(int i = 1; i < n; i++){
            xorr ^= start + 2 * i;
        }
        return xorr;
    }
};
```