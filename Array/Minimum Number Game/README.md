```C++
class Solution {
public:
    int minimum(vector<int>& nums){
        int minimumValue = INT_MAX, minimumIndex = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            if(minimumValue > nums[i]){
                minimumValue = nums[i];
                minimumIndex = i;
            }
        }
        nums.erase(nums.begin() + minimumIndex);
        return minimumValue;
    } 
    vector<int> numberGame(vector<int>& nums) {
        int aliceRemoves, bobRemoves;
        vector<int> arr;
        while(nums.size()){
            aliceRemoves = minimum(nums);
            bobRemoves = minimum(nums);
            arr.push_back(bobRemoves);
            arr.push_back(aliceRemoves);
        }
        return arr;
    }
};
```