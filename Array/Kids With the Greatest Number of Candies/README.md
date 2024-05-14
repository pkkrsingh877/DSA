```C++
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = INT_MIN;
        vector<bool> result;

        for(int candy : candies){
            if(max < candy){
                max = candy;
            }
        }

        for(int candy : candies){
            if(candy + extraCandies >= max){
                result.push_back(true);
            }else{
                result.push_back(false);
            }
        }

        return result;
    }
};
```