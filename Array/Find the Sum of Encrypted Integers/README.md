```C++
class Solution {
public:
    int encrypt(int number){
        int newNumber = 0;
        int max = INT_MIN;
        int count = 0;
        while(number){
            int digit = number % 10;
            number = number / 10; 
            if(max < digit){
                max = digit;
            }
            count++;
        }
        for(int i = 0; i < count; i++){
            newNumber = newNumber * 10 + max;
        }
        return newNumber;
    }
    int sumOfEncryptedInt(vector<int>& nums) {
        int output = 0;
        for(int num : nums){
            output += encrypt(num);
        }
        return output;
    }
};
```