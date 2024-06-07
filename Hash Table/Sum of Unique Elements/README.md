```C++
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> seen;
        int sum = 0;
        for(int num : nums){
            seen[num]++;
        }
        for(auto num : seen){
            if(num.second == 1){
                sum += num.first;
            }
        }
        return sum;
    }
};
```