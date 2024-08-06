```C++
class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> set;
        int sumOfSquares;
        do{
            sumOfSquares = 0;
            while(n){
                int digit = n % 10;
                sumOfSquares += digit * digit;
                n = n / 10;
            }
            if(set.find(sumOfSquares) != set.end()){
                return false;
            }
            set.insert(sumOfSquares);
            n = sumOfSquares;
        }while(sumOfSquares != 1);

        return true;
    }
};
```