```C++
class Solution {
public:
    int tribonacci(int n) {
        if(n == 0){
            return 0;
        }else if(n == 1){
            return 1;
        }else if(n == 2){
            return 1;
        }
        int tribonacciTable[n + 1];

        tribonacciTable[0] = 0;
        tribonacciTable[1] = 1;
        tribonacciTable[2] = 1;

        for(int i = 3; i < n + 1; i++){
            tribonacciTable[i] = tribonacciTable[i - 1] + tribonacciTable[i - 2] + tribonacciTable[i - 3];
        }
        
        return tribonacciTable[n];
    }
};
```