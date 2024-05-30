```C++
class Solution {
public:
    int gcd(int min, int max){
        int hcf = 1;
        for(int i = 1; i <= min; i++){
            if(min % i == 0 && max % i == 0){
                hcf = i;
            }
        }
        return hcf;
    }
    int findGCD(vector<int>& nums) {
        int max = INT_MIN;
        int min = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            if(max < nums[i]){
                max = nums[i];
            }
            if(min > nums[i]){
                min = nums[i];
            }
        }
        return gcd(min, max);
    }
};
```