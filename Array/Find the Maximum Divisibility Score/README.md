```C++
class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        vector<int> scores;
        for(int i = 0; i < divisors.size(); i++){
            int score = 0;
            for(int j = 0; j < nums.size(); j++){
                if(nums[j] % divisors[i] == 0){
                    score++;
                }
            }
            scores.push_back(score);
        }
        int max = INT_MIN;
        for(int i = 0; i < scores.size(); i++){
            if(max < scores[i]){
                max = scores[i];
            }
        }
        vector<int> maxScoreIndices;
        for(int i = 0; i < scores.size(); i++){
            if(max == scores[i]){
                maxScoreIndices.push_back(i);
            }
        }
        int min = INT_MAX;
        for(int i = 0; i < maxScoreIndices.size(); i++){
            if(min > divisors[maxScoreIndices[i]]){
                min = divisors[maxScoreIndices[i]];
            }
        }
        return min;
    }
};
```