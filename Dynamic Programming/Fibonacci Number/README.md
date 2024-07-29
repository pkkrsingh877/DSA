```C++
class Solution {
public:
    int fib(int n) {
        if( n == 0 || n == 1){
            return n;
        }

        int fibonacciTable[n + 1];

        fibonacciTable[0] = 0;
        fibonacciTable[1] = 1;
        
        for(int i = 2; i < n + 1; i++){
            fibonacciTable[i] = fibonacciTable[i - 1] + fibonacciTable[i - 2];
        }

        return fibonacciTable[n];
    }
};
```