```C++
class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end());

        int moneyRequired = 0;

        for(int i = cost.size() - 1; i >= 0; i--){
            if((cost.size() - i) % 3 == 0){
                continue;
            }
            moneyRequired += cost[i];
        }
        return moneyRequired;
    }
};
```