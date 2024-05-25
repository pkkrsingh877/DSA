```C++
class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        stack<int> digits;
        vector<int> answer;
        for(int num : nums){
            while(num){
                int digit = num % 10;
                digits.push(digit);
                num /= 10;
            }
            while(!digits.empty()){
                int digit = digits.top();
                answer.push_back(digit);
                digits.pop();
            }
        }
        return answer;
    }
};
```