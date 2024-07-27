```C++
class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum = 0;
        int minIndex = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            int sumAfterMiddle = 0;
            for(int j = i + 1; j < nums.size(); j++){
                sumAfterMiddle += nums[j];
            }
            int sumBeforeMiddle = 0;
            for(int j = 0; j < i; j++){
                sumBeforeMiddle += nums[j];
            }
            if(sumAfterMiddle == sumBeforeMiddle){
                if(minIndex > i){
                    minIndex = i;
                }
            }
        }
        if(minIndex >= 0 && minIndex < nums.size()){
            return minIndex;
        }
        return -1;
    }
};
```