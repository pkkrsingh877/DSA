```C++
class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_set<int> appearedTwice;
        
        for(int i = 0; i < nums.size() - 1; i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] == nums[j] && appearedTwice.find(nums[i]) == appearedTwice.end()){
                    appearedTwice.insert(nums[i]);
                }
            }
        }
        int xorResult = 0;
        for(int num : appearedTwice){
            xorResult ^= num;
        }
        return xorResult;
    }
};
```