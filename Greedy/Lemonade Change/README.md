```C++
// Greedy Solution
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fiveDollersTotal = 0;
        int tenDollersTotal = 0;
        int twentyDollersTotal = 0;

        for(int bill : bills){
            if(bill == 5){
                fiveDollersTotal += 5;
            }else if(bill == 10){
                tenDollersTotal += 10;
                if(fiveDollersTotal >= 5){
                    fiveDollersTotal -= 5;
                }else{
                    return false;
                }
            }else if(bill == 20){
                twentyDollersTotal += 20;
                if(fiveDollersTotal >= 5 && tenDollersTotal >= 10){
                    fiveDollersTotal -= 5;
                    tenDollersTotal -= 10;
                }else if(fiveDollersTotal >= 15){
                    fiveDollersTotal -= 15;
                }else{
                    return false;
                }
            }
        }
        return true;
    }
};
```