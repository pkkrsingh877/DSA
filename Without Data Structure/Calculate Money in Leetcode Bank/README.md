```C++
class Solution {
public:
    int totalMoney(int n) {
        int week = 0;
        int moneyInBank = 0;
        int i = 1;
        while(n){
            moneyInBank += (i + week);
            if(i % 7 == 0){
                week++;
                i = 1;
                n--;
                continue;
            }
            i++;
            n--;
        }
        return moneyInBank;
    }
};
```