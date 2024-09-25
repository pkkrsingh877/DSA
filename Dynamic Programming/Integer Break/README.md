```C++
class Solution {
public:
    int integerBreak(int n) {
        if(n == 2){
            return 1;
        }
        if(n == 3){
            return 2;
        }

        vector<int> table(n + 1, 0);
        table[2] = 1;
        table[3] = 2;

        for(int i = 4; i < n + 1; i++){
            for(int j = 1; j < i; j++){
                table[i] = max(table[i], max(j * (i - j), j * table[i - j]));
            }
        }

        return table[n];
    }
};
```