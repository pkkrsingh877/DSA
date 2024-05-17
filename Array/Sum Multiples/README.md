```C++
class Solution {
public:
    int sumOfMultiples(int n) {
        vector <int> array = {3, 5, 7};
        int sum = 0;
        for(int i = 1; i <= n; i++){
            if(i % 3 == 0 || i % 5 == 0 || i % 7 == 0){
                sum += i;
            }
        }
        return sum;
    }
};
```