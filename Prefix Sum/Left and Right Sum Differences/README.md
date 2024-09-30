```C++
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> answer;
        int prefixSum = 0;
        int totalSum = 0;
        for(int i = 0; i < nums.size(); i++){
            totalSum += nums[i];
        }

        for(int i = 0; i < nums.size(); i++){
            int value = abs(prefixSum - abs(totalSum - prefixSum - nums[i]));
            answer.push_back(value);
            prefixSum += nums[i];
        }
        return answer;
    }
};
```