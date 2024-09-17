```C++
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int writeHead = 0;
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                nums[writeHead++] = nums[i];
            }else{
                count++;
            }
        }

        int lastIndex = nums.size() - 1;
        while(count){
            nums[lastIndex] = 0;
            count--;
            lastIndex--;
        }
    }
};
```