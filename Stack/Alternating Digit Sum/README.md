```C++
class Solution {
public:
    int alternateDigitSum(int n) {
        stack<int> digits;
        vector<int> result;
        int acc = 0, count = 0;
        while(n){
            int digit = n % 10;
            digits.push(digit);
            n /= 10;
            count++;
        }
        while(!digits.empty()){
            result.push_back(digits.top());
            digits.pop();
        }
        for(int i = 0; i < count; i++){
            if(i % 2 == 0){
                acc += result[i];
            }else{
                acc -= result[i];
            }
        }
        return acc;
    }
};
```