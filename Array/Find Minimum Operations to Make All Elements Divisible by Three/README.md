```C++
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count = 0;
        for(int num : nums){
            if(num % 3 == 0){
                // do nothing
            }else{
                if((num + 1) % 3 == 0 || (num - 1) % 3 == 0){
                    count += 1;
                }else if((num + 2) % 3 == 0 || (num - 2) % 3 == 0){
                    count += 2;
                } 
            }
        }
        return count;
    }
};
```