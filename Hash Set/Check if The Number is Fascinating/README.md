```C++
class Solution {
public:
    bool isFascinating(int n) {
        unordered_set<int> digits;
        int twice = 2 * n;
        int thrice = 3 * n;
        if(twice > 999 || thrice > 999){
            return false;
        }
        n = n * 1000 + twice;
        n = n * 1000 + thrice;
        cout << n << endl;
        while(n){
            if(digits.contains(n % 10) || n % 10 == 0){
                return false;
            }
            digits.insert(n % 10);
            n /= 10;
        }
        return true;
    }
};
```