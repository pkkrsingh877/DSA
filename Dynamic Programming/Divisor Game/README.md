```C++
class Solution {
public:
    bool divisorGame(int n) {
        vector<bool> table(n + 1, false);
        table[1] = false;

        for(int i = 2; i <= n; i++){
            for(int x = 1; x < i; x++){
                if(i % x == 0 && !table[i - x]){
                    table[i] = true;
                    break;
                }
            }
        }

        return table[n];
    }
};
```