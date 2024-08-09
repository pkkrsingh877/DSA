```C++
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> answer;
        for(int i = 0; i < prices.size(); i++){
            bool pushed = false;
            for(int j = i + 1; j < prices.size(); j++){
                if(prices[i] >= prices[j]){
                    answer.push_back(prices[i] - prices[j]);
                    pushed = true;
                    break;
                }
            }
            if(!pushed){
                answer.push_back(prices[i]);
            }
        }
        return answer;
    }
};
```