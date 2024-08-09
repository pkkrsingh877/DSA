```C++
class Solution {
public:
    int findComplement(int num) {
        int totalBits = 0;
        int temp = num;
        while (temp > 0) {
            totalBits++;
            temp >>= 1;
        }
        unsigned int mask = 1 << totalBits;
        mask -= 1;
        
        return mask ^ num;
    }
};
```