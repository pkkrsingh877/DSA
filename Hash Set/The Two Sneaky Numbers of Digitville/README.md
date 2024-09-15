```
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_set<int> numSet;
        vector<int> result;
        for(int num : nums){
            if(numSet.contains(num)){
                result.push_back(num);
            }
            numSet.insert(num);
        }
        return result;
    }
};
```