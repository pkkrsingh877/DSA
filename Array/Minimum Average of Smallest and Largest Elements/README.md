```C++
class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double> averages;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size()/2; i++){
            double data = (nums[i] + nums[nums.size() - i - 1])/2.0;
            averages.push_back(data);
        }

        double min = numeric_limits<double>::max();
        for(int i = 0; i < averages.size(); i++){
            if(min > averages[i]){
                min = averages[i];
            }
        }

        return min;
    }
};
```